// addr: 0x014f8c00
// name: FUN_014f8c00
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_014f8c00(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
                    /* Map setter helper with weak evidence: normalizes/copies a key and stores a
                       supplied value in an int default map. */
  FUN_0042c155(&param_2);
  piVar1 = IntDefaultMap_getOrInsert((void *)(param_1 + 0x40),&param_2);
  *piVar1 = param_3;
  return;
}

