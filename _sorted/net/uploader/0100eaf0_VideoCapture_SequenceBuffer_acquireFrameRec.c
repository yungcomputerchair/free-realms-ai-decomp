// addr: 0x0100eaf0
// name: VideoCapture_SequenceBuffer_acquireFrameRec
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall VideoCapture_SequenceBuffer_acquireFrameRec(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  void *this;
  int iVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Acquires or reuses a VideoCapture::SequenceBuffer frame record and stores it
                       in an output holder. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016339bb;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  pvVar4 = (void *)0x0;
  if (*param_2 != 0) {
    FUN_0100e470(*param_2);
    *param_2 = 0;
  }
  FUN_00fc45f0(uVar2);
  local_4 = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0xa0))) {
      local_4 = 0xffffffff;
      if (param_1 != -0x10) {
        FUN_00fc4610();
      }
      ExceptionList = local_c;
      return 0xffffffff;
    }
    this = Mem_Alloc(0x3c);
    local_4._0_1_ = 1;
    if (this != (void *)0x0) {
      pvVar4 = VideoCapture_SequenceBuffer_FrameRec_ctor
                         (this,param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar3 = *(int *)(param_1 + 0xa0) + 1;
    if (*(int *)(param_1 + 0xa4) < iVar3) {
      FUN_0100d7a0(iVar3,0);
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0xa0) * 4);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    if (piVar1 != (int *)0x0) {
      *piVar1 = (int)pvVar4;
    }
    if (*param_2 != 0) {
      FUN_0100e470(*param_2);
      *param_2 = 0;
    }
    *param_2 = (int)pvVar4;
    local_4 = 0xffffffff;
    if (param_1 != -0x10) {
      FUN_00fc4610();
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0xac) + -4 + *(int *)(param_1 + 0xb0) * 4);
    if (*param_2 != 0) {
      FUN_0100e470(*param_2);
      *param_2 = 0;
    }
    *param_2 = iVar3;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    local_4 = 0xffffffff;
    if (param_1 != -0x10) {
      FUN_00fc4610();
    }
  }
  ExceptionList = local_c;
  return 0;
}

