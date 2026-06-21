// addr: 0x005f6eb7
// name: StdList_Node11_ctor_005f6eb7
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdList_Node11_ctor_005f6eb7(void * param_1) */

void * __fastcall StdList_Node11_ctor_005f6eb7(void *param_1)

{
                    /* Second constructor wrapper for the same sentinel-based container shape; it
                       calls StdList_Node11_initSentinel and returns this. Evidence: identical
                       one-helper wrapper at a separate template instantiation site. */
  StdList_Node11_initSentinel(param_1);
  return param_1;
}

