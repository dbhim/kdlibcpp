#pragma once

#include <dbgeng.h>
#include <dbghelp.h>

struct DbgExt {

    IDebugClient            *client;
    IDebugClient4           *client4;
    
    IDebugControl           *control;
    
    IDebugRegisters         *registers;
    
    IDebugSymbols           *symbols;
    IDebugSymbols2          *symbols2;   
    IDebugSymbols3          *symbols3;   
    
    IDebugDataSpaces        *dataSpaces;
    IDebugDataSpaces4       *dataSpaces4;
    
    IDebugAdvanced2         *advanced2;
    
    IDebugSystemObjects     *system;
    IDebugSystemObjects2    *system2;
};

extern DbgExt    *dbgExt;

void
SetupDebugEngine( IDebugClient4 *client, DbgExt *dbgExt  );    
