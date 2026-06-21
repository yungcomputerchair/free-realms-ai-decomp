// addr: 0x0135ff70
// name: FUN_0135ff70
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall FUN_0135ff70(int param_1)

{
  int *piVar1;
  
                    /* Int map helper with weak evidence: looks up default-map entry for a key
                       passed on stack and returns stored value plus one. */
  piVar1 = IntDefaultMap_getOrInsert((void *)(param_1 + 0xcc),(int *)&stack0x00000004);
  return *piVar1 + 1;
}

