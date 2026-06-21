// addr: 0x01000ff0
// name: VideoCapture_startCapture
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_startCapture(void * this, void * settings, void * arg2, void
   * shutdownPayload) */

int __thiscall VideoCapture_startCapture(void *this,void *settings,void *arg2,void *shutdownPayload)

{
  bool bVar1;
  void **ppvVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Starts capture when no active capture object exists: validates, creates
                       capture holder and EncoderThreadImpl, posts start and shutdown/control
                       messages, stores ownership wrappers, copies settings, and marks capture
                       active. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01631846;
  local_c = ExceptionList;
  ppvVar2 = &local_c;
  uVar6 = 0;
  if ((*(int *)((int)this + 0x1a0) == 0) &&
     (ExceptionList = ppvVar2,
     ppvVar2 = (void **)FUN_01001a70(DAT_01b839d8 ^ (uint)&stack0xffffffd4), (char)ppvVar2 != '\0'))
  {
    bVar1 = VideoCapture_EncoderStateTriple_isValid(arg2);
    ppvVar2 = (void **)CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      pvVar3 = Mem_Alloc(4);
      local_4 = 0;
      if (pvVar3 != (void *)0x0) {
        uVar6 = VideoCapture_createCaptureSessionHolder();
      }
      local_4 = 1;
      pvVar3 = Mem_Alloc(4);
      local_4._0_1_ = 2;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = VideoCapture_createEncoderThreadImpl
                          (uVar6,this,(int)settings + 0x50,*(undefined4 *)((int)settings + 0x58),
                           arg2);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      VideoCapture_FuncMessageParams_dtorThunk();
      VideoCapture_postStartMessage_thunk();
      VideoCapture_postShutdownMessage_thunk();
      FUN_01000e20(uVar6);
      uVar6 = FUN_01000e60(uVar4);
      puVar7 = (undefined4 *)((int)this + 0x1b0);
      for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *(undefined4 *)settings;
        settings = (undefined4 *)((int)settings + 4);
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)((int)this + 0x218) = 1;
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
  }
  ExceptionList = local_c;
  return (uint)ppvVar2 & 0xffffff00;
}

