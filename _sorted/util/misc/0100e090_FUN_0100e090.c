// addr: 0x0100e090
// name: FUN_0100e090
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0100e090(int param_1,int *param_2)

{
  int *piVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Updates an object collection from a virtual source, creates a 0x18-byte
                       record when needed, and links it through 00fc46* helpers. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016337cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)0x0;
  if ((int *)*param_2 != (int *)0x0) {
    (**(code **)(*(int *)*param_2 + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
    *param_2 = 0;
  }
  FUN_00fc45f0();
  uStack_4 = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xa0))) {
      uStack_4 = 0xffffffff;
      if (param_1 != -0x10) {
        FUN_00fc4610();
      }
      ExceptionList = local_c;
      return 0xffffffff;
    }
    this = Mem_Alloc(0x18);
    uStack_4._0_1_ = 1;
    if (this != (void *)0x0) {
      puVar3 = VideoCapture_FrameBuffer_ctor(this,param_1,*(undefined4 *)(param_1 + 4));
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    iVar2 = *(int *)(param_1 + 0xa0) + 1;
    if (*(int *)(param_1 + 0xa4) < iVar2) {
      FUN_0100d6b0(iVar2,0);
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0xa0) * 4);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    if (piVar1 != (int *)0x0) {
      *piVar1 = (int)puVar3;
    }
    if ((int *)*param_2 != (int *)0x0) {
      (**(code **)(*(int *)*param_2 + 4))();
      *param_2 = 0;
    }
    *param_2 = (int)puVar3;
    uStack_4 = 0xffffffff;
    if (param_1 != -0x10) {
      FUN_00fc4610();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xac) + -4 + *(int *)(param_1 + 0xb0) * 4);
    if ((int *)*param_2 != (int *)0x0) {
      (**(code **)(*(int *)*param_2 + 4))();
      *param_2 = 0;
    }
    *param_2 = iVar2;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    uStack_4 = 0xffffffff;
    if (param_1 != -0x10) {
      FUN_00fc4610();
    }
  }
  ExceptionList = local_c;
  return 0;
}

