// addr: 0x012ec680
// name: FUN_012ec680
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_012ec680(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
                    /* Checks whether a string at param_3 matches the name stored in a 0x1c-byte
                       record vector at index param_2. It returns true for exact compare success, or
                       0 when index is out of range. */
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x1c;
    if (param_2 < uVar3) {
      if ((*(int *)(param_1 + 8) == 0) ||
         ((uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x1c) <= param_2)) {
        FUN_00d83c2d();
      }
      iVar2 = *(int *)(param_1 + 8) + param_2 * 0x1c;
      if (*(uint *)(*(int *)(param_1 + 8) + 0x18 + param_2 * 0x1c) < 0x10) {
        iVar1 = iVar2 + 4;
      }
      else {
        iVar1 = *(int *)(iVar2 + 4);
      }
      iVar2 = FUN_00f942a0(0,*(undefined4 *)(param_3 + 0x14),iVar1,*(undefined4 *)(iVar2 + 0x14));
      return (uint)(iVar2 == 0);
    }
  }
  return uVar3 & 0xffffff00;
}

