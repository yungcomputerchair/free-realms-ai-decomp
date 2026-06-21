// addr: 0x01360800
// name: FUN_01360800
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01360800(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
                    /* Int map helper with weak evidence: gets or inserts an int-map entry for a key
                       and stores the supplied value. */
  piVar1 = IntDefaultMap_getOrInsert((void *)(param_1 + 0x30c),&param_2);
  *piVar1 = param_3;
  return;
}

