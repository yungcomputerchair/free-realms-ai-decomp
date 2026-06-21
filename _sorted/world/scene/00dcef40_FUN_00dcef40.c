// addr: 0x00dcef40
// name: FUN_00dcef40
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dcef40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Changes the owning/parent object pointer for an Umbra visibility object,
                       unlinking it from the old active list, linking it to the new one, and marking
                       it dirty. */
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (param_2 != iVar3) {
    iVar1 = param_1 + -0x10;
    if ((iVar3 != 0) && ((*(byte *)(param_1 + 4) & 8) != 0)) {
      if (*(int *)(iVar2 + 0x28) == 0) {
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x2c);
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x28) + 8) + 0x2c) = *(undefined4 *)(iVar2 + 0x2c)
        ;
      }
      iVar2 = *(int *)(param_1 + 8);
      if (*(int *)(iVar2 + 0x2c) == 0) {
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar2 + 0x28);
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 8) + 0x28) = *(undefined4 *)(iVar2 + 0x28)
        ;
      }
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x28) = 0;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x2c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    }
    *(int *)(*(int *)(param_1 + 8) + 0x10) = param_2;
    if (iVar3 != 0) {
      FUN_00dca4f0(iVar1);
    }
    if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
      FUN_00dca480(iVar1);
      FUN_00dca4c0(iVar1,*(uint *)(param_1 + 4) >> 6 & 0xffffff01);
    }
    FUN_00dce980();
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
  }
  return;
}

