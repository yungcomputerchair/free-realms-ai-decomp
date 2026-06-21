// addr: 0x00dc2020
// name: FUN_00dc2020
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00dc2020(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161b7a8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = Umbra::Commander::vftable;
  if (DAT_01bf3db4 == 0) {
    (*(code *)**(undefined4 **)param_1[1])(0);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(uVar2);
  iVar1 = param_1[1];
  uStack_4 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x68) == 0) {
      DAT_01bf83e4 = *(undefined4 *)(iVar1 + 0x6c);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x68) + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
    }
    if (*(int *)(iVar1 + 0x6c) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x68) = *(undefined4 *)(iVar1 + 0x68);
    }
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 0x34) + 4) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0xffffffff;
    FUN_00dc4950(iVar1);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return;
}

