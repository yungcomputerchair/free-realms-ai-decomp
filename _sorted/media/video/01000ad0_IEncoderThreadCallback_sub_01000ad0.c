// addr: 0x01000ad0
// name: IEncoderThreadCallback_sub_01000ad0
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall IEncoderThreadCallback_sub_01000ad0(undefined4 *param_1)

{
  void **ppvVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Identifies a IEncoderThreadCallback sub_01000ad0 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_01631779;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = VideoCapture::VideoCaptureManagerImpl_SingleUse::vftable;
  local_4 = 6;
  ppvVar1 = (void **)param_1[0x6a];
  if (ppvVar1 != (void **)0x0) {
    VideoCapture_FuncMessageParam_release(ppvVar1);
                    /* WARNING: Subroutine does not return */
    _free(ppvVar1);
  }
  ppvVar1 = (void **)param_1[0x68];
  if (ppvVar1 != (void **)0x0) {
    VideoCapture_EncoderContext_deleteOwned(ppvVar1);
                    /* WARNING: Subroutine does not return */
    _free(ppvVar1);
  }
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  FUN_010013a0(uVar2);
  local_4 = CONCAT31(local_4._1_3_,4);
  ppvVar1 = (void **)param_1[0x6a];
  if (ppvVar1 != (void **)0x0) {
    VideoCapture_FuncMessageParam_release(ppvVar1);
                    /* WARNING: Subroutine does not return */
    _free(ppvVar1);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  ppvVar1 = (void **)param_1[0x68];
  if (ppvVar1 != (void **)0x0) {
    VideoCapture_EncoderContext_deleteOwned(ppvVar1);
                    /* WARNING: Subroutine does not return */
    _free(ppvVar1);
  }
  local_4._0_1_ = 2;
  FUN_00fc45a0();
  local_4._0_1_ = 1;
  FUN_00fc45a0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00fc45a0();
  *param_1 = VideoCapture::IEncoderThreadCallback::vftable;
  ExceptionList = local_c;
  return;
}

