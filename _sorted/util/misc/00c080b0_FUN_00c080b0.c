// addr: 0x00c080b0
// name: FUN_00c080b0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00c080b0(undefined4 param_1)

{
  int iVar1;
  void *slot;
  int unaff_ESI;
  
                    /* Runs a chess/engine startup path if a count is positive: updates a global
                       state, allocates/gets an object, and calls a Chess-related function. Exact
                       method name not evident. */
  iVar1 = FUN_00e3a390(param_1);
  if (0 < iVar1) {
    FUN_00e3a770(param_1,0xffffffff);
    slot = (void *)FUN_00d83c90();
    Chess_replaceAndStartInstance(&DAT_01bec3b0,slot,unaff_ESI);
  }
  return 0;
}

