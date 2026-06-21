// addr: 0x005e8ccf
// name: StdList_Node11_ctor_005e8ccf
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdList_Node11_ctor_005e8ccf(void * param_1) */

void * __fastcall StdList_Node11_ctor_005e8ccf(void *param_1)

{
                    /* Constructor wrapper that initializes the container sentinel via
                       StdList_Node11_initSentinel and returns this. Evidence: function body is only
                       the init helper call followed by returning param_1. */
  StdList_Node11_initSentinel(param_1);
  return param_1;
}

