// addr: 0x01432f20
// name: FUN_01432f20
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01432f20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_c;
  undefined1 local_8 [8];
  
                    /* Looks up a value by key in the map at +0x1c and returns the mapped 32-bit
                       value, or 0 if absent. */
  local_c = param_2;
  piVar3 = (int *)FUN_01432150(local_8,&local_c);
  iVar1 = piVar3[1];
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*piVar3 == 0) || (*piVar3 != param_1 + 0x1c)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iVar2) {
    puVar4 = (undefined4 *)FUN_01432cb0(&param_2);
    return *puVar4;
  }
  return 0;
}

