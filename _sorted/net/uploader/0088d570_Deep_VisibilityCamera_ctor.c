// addr: 0x0088d570
// name: Deep_VisibilityCamera_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
Deep_VisibilityCamera_ctor(undefined4 *param_1,int param_2,int param_3,char param_4,void *param_5)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs Deep::VisibilityCamera and its Umbra camera/internal camera state.
                        */
  puStack_8 = &LAB_01578ed3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = Deep::VisibilityCameraInterface::vftable;
  local_4 = 0;
  *param_1 = Deep::VisibilityCamera::vftable;
  pvVar2 = Umbra_Camera_create();
  param_1[1] = pvVar2;
  pvVar2 = Mem_Alloc(0x58);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0088d1b0(uVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = 0;
  submitClampedRenderRect
            (param_2,param_3,(void *)((-(uint)(param_4 != '\0') & 0xfffffffa) + 8 | 0x41),1.0,1.0);
  submitClampedRenderScalar(param_5,param_5,DAT_017f0264);
  Deep_setVisibilityCameraThreadSafe(DAT_01be46d8);
  ExceptionList = local_c;
  return param_1;
}

