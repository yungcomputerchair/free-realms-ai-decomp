// addr: 0x010051f0
// name: VideoCapture_handleFuncMessageFrame
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_handleFuncMessageFrame(void * message) */

void __thiscall VideoCapture_handleFuncMessageFrame(void *this,void *message)

{
  int oldState_;
  int resultCode_;
  void *this_00;
  int newState_;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles FuncMessage type 2 for active capture states, derives a result from
                       the message payload, allocates a response record, and enqueues response type
                       8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016322ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  oldState_ = VideoCapture_EncoderThreadImpl_getState();
  if (((oldState_ == 1) || (oldState_ == 2)) || (oldState_ == 5)) {
    resultCode_ = VideoCapture_EncoderThreadImpl_submitFrame();
    this_00 = Mem_Alloc(0x14);
    local_10 = (void *)0x0;
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      newState_ = VideoCapture_EncoderThreadImpl_getState();
      local_10 = VideoCapture_EncoderStateChangeParams_ctor
                           (this_00,oldState_,2,newState_,resultCode_);
    }
    local_4 = 0xffffffff;
    local_14 = 8;
    VideoCapture_EncoderThreadImpl_enqueueFuncMessage(this,&local_14);
  }
  ExceptionList = local_c;
  return;
}

