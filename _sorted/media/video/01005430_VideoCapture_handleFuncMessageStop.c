// addr: 0x01005430
// name: VideoCapture_handleFuncMessageStop
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VideoCapture_handleFuncMessageStop(void) */

void VideoCapture_handleFuncMessageStop(void)

{
  int oldState_;
  void *this;
  int newState_;
  void *in_ECX;
  int resultCode_;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles FuncMessage type 5 for active states, invokes a stop/flush helper,
                       and posts a response message with type 8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163230b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  oldState_ = VideoCapture_EncoderThreadImpl_getState();
  if (((oldState_ == 1) || (oldState_ == 2)) || (oldState_ == 5)) {
    VideoCapture_EncoderThreadImpl_stopEncoder();
    this = Mem_Alloc(0x14);
    local_10 = (void *)0x0;
    local_4 = 0;
    if (this != (void *)0x0) {
      resultCode_ = 0;
      local_14 = this;
      newState_ = VideoCapture_EncoderThreadImpl_getState();
      local_10 = VideoCapture_EncoderStateChangeParams_ctor(this,oldState_,6,newState_,resultCode_);
    }
    local_4 = 0xffffffff;
    local_14 = (void *)0x8;
    VideoCapture_EncoderThreadImpl_enqueueFuncMessage(in_ECX,&local_14);
  }
  ExceptionList = local_c;
  return;
}

