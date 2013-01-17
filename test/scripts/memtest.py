#
#
#

import unittest
import target
import pykd
import math

class MemoryTest( unittest.TestCase ):

    def testLoadChars( self ):
        s = pykd.loadChars( target.module.helloStr, 5 )
        self.assertEqual( "Hello", s )
        
    def testLoadWChars( self ):
        s = pykd.loadWChars( target.module.helloWStr, 5 )
        self.assertEqual( "Hello", s )
        
    def testLoadBytes( self ):
        ucharArray = pykd.loadBytes( target.module.ucharArray, 5 )
        testArray = [ 0, 10, 0x78, 128, 0xFF ]
        self.assertEqual( 5, len(ucharArray) )
        self.assertEqual( 0, len( [ ucharArray[i] for i in xrange(5) if ucharArray[i] != testArray[i] ] ) )

    def testLoadWords( self ):
        loadArray = pykd.loadWords( target.module.ushortArray, 5 )
        testArray = [ 0, 10, 0xFF, 0x8000, 0xFFFF  ]
        self.assertEqual( len(testArray), len(loadArray) )
        self.assertEqual( 0, len( [ loadArray[i] for i in xrange(len(testArray)) if loadArray[i] != testArray[i] ] ) )
        
    def testLoadDWords( self ):
        loadArray = pykd.loadDWords( target.module.ulongArray, 5 )
        testArray = [ 0, 0xFF, 0x8000, 0x80000000, 0xFFFFFFFF ]
        self.assertEqual( len(testArray), len(loadArray) )
        self.assertEqual( 0, len( [ loadArray[i] for i in xrange(len(testArray)) if loadArray[i] != testArray[i] ] ) )
        
    def testLoadQWords( self ):
        loadArray = pykd.loadQWords( target.module.ulonglongArray, 5 )
        testArray = [ 0, 0xFF, 0xFFFFFFFF, 0x8000000000000000, 0xFFFFFFFFFFFFFFFF ]
        self.assertEqual( len(testArray), len(loadArray) )
        self.assertEqual( 0, len( [ loadArray[i] for i in xrange(len(testArray)) if loadArray[i] != testArray[i] ] ) )
        
    def testLoadSignBytes( self ):
        charArray = pykd.loadSignBytes( target.module.ucharArray, 5 )
        testArray = [ 0, 10, 0x78, -128, -1 ]
        self.assertEqual( 5, len(charArray) )
        self.assertEqual( 0, len( [ charArray[i] for i in xrange(len(testArray)) if charArray[i] != testArray[i] ] ) )    
    
    def testLoadSignWords( self ):
        loadArray = pykd.loadSignWords( target.module.ushortArray, 5 )
        testArray = [ 0, 10, 255, -32768, -1 ]
        self.assertEqual( len(testArray), len(loadArray) )
        self.assertEqual( 0, len( [ loadArray[i] for i in xrange(len(testArray)) if loadArray[i] != testArray[i] ] ) )
        
    def testLoadSignDWords( self ):
        loadArray = pykd.loadSignDWords( target.module.ulongArray, 5 )
        testArray = [0, 255, 32768, -2147483648, -1]
        self.assertEqual( len(testArray), len(loadArray) )
        self.assertEqual( 0, len( [ loadArray[i] for i in xrange(len(testArray)) if loadArray[i] != testArray[i] ] ) )
        
    def testLoadSignQWords( self ):
        loadArray = pykd.loadSignQWords( target.module.ulonglongArray, 5 )
        testArray = [0, 255, 4294967295L, -9223372036854775808L, -1]
        self.assertEqual( len(testArray), len(loadArray) )
        self.assertEqual( 0, len( [ loadArray[i] for i in xrange(len(testArray)) if loadArray[i] != testArray[i] ] ) )

    def testPtrRead( self ):
        self.assertEqual( 0x80, pykd.ptrByte( target.module.g_bigValue ) )
        self.assertEqual( 0x8080, pykd.ptrWord( target.module.g_bigValue ) )
        self.assertEqual( 0x80808080, pykd.ptrDWord( target.module.g_bigValue ) )
        self.assertEqual( 0x8080808080808080, pykd.ptrQWord( target.module.g_bigValue ) )
        self.assertEqual( -128, pykd.ptrSignByte( target.module.g_bigValue ) )
        self.assertEqual( -32640, pykd.ptrSignWord( target.module.g_bigValue ) )
        self.assertEqual( -2139062144, pykd.ptrSignDWord( target.module.g_bigValue ) )
        self.assertEqual( -9187201950435737472, pykd.ptrSignQWord( target.module.g_bigValue ) )

    def testCompare( self ):
        self.assertTrue( pykd.compareMemory( target.module.helloStr, pykd.ptrPtr(target.module.strArray), 5 ) )
        self.assertFalse( pykd.compareMemory( target.module.helloStr, target.module.helloWStr, 5 ) )
        
    def testCStr( self ):        
        self.assertEqual( 'Hello', pykd.loadCStr( target.module.helloStr ) )
        self.assertEqual( u'Hello', pykd.loadWStr( target.module.helloWStr ) )
        
    def testBigCStr( self ):        
        self.assertEqual( 0x2000, len( pykd.loadCStr( pykd.ptrPtr( target.module.bigCStr ) ) ) )
        self.assertEqual( 0x2000, len( pykd.loadWStr( pykd.ptrPtr( target.module.bigWStr ) ) ) )
        
    def testVaValid( self ):
        self.assertTrue( pykd.isValid( target.module.begin() ) )
        self.assertFalse( pykd.isValid( 0 ) )
        self.assertFalse( pykd.isValid( 0xDEADBEAF ) )
        
    def testPtrList( self ):
        lst = pykd.loadPtrList( target.module.g_listHead )
        self.assertEqual( 3, len( lst ) )
        
    def testPtrArray( self ):
        lst = pykd.loadPtrs( target.module.arrIntMatrixPtrs, 3 )
        self.assertEqual( 3, len( lst ) )
        
    def testInvalidAddr( self ):
        try:
            pykd.loadSignBytes( 0xDEADBEEF, 5 )
        except pykd.MemoryException:
            self.assertTrue( True )
            
    def testPtrFloat(self):
        self.assertTrue( math.fabs( pykd.ptrFloat( target.module.g_float) - 5.123456 ) < 0.001 )
        self.assertTrue( math.fabs( pykd.ptrDouble( target.module.g_double) - 5.1234567891 ) < 0.0000001 )
        
    def testLoadFloats(self):
       testArray = [ 1.0, 2.001, -3.0004 ];
       readArray = pykd.loadFloats( target.module.floatArray, 3 );
       for i in range(0,3):
           self.assertTrue( math.fabs( testArray[i] - readArray[i]  ) < 0.001 )
           
    def testLoadDoubles(self):
       testArray = [ 1.0, 2.0000001, -3.0000004 ];
       readArray = pykd.loadDoubles( target.module.doubleArray, 3 );
       print readArray
       for i in range(0,3):
           self.assertTrue( math.fabs( testArray[i] - readArray[i]  ) < 0.0000001 )
