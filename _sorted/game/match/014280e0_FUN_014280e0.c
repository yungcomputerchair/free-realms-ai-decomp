// addr: 0x014280e0
// name: FUN_014280e0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 * __fastcall FUN_014280e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_8 [8];
  
                    /* Looks up a string/resource pointer by key in the map at +0x1c and returns the
                       mapped pointer, or a global empty/default string when absent. */
  iVar1 = *(int *)(param_1 + 0x20);
  piVar2 = (int *)FUN_01426cc0(local_8,&stack0x00000004);
  if ((*piVar2 == 0) || (*piVar2 != param_1 + 0x1c)) {
    FUN_00d83c2d();
  }
  if (piVar2[1] != iVar1) {
    puVar3 = (undefined4 *)FUN_01427f40(&stack0x00000004);
    return (undefined1 *)*puVar3;
  }
  return &DAT_0175b400;
}

