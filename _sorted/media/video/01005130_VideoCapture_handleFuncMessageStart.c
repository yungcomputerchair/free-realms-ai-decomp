// addr: 0x01005130
// name: VideoCapture_handleFuncMessageStart
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_handleFuncMessageStart(void * message) */

void __thiscall VideoCapture_handleFuncMessageStart(void *this,void *message)

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
  
                    /* Handles FuncMessage type 1 by checking current capture state, deriving a
                       result, allocating a 0x14-byte response record, and enqueueing an 8-byte
                       response message. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163227b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  oldState_ = VideoCapture_EncoderThreadImpl_getState();
  if ((oldState_ == 0) || (oldState_ == 6)) {
    resultCode_ = FUN_010033a0(*(int *)((int)message + 4) + 8);
    this_00 = Mem_Alloc(0x14);
    local_10 = (void *)0x0;
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      newState_ = VideoCapture_EncoderThreadImpl_getState();
      local_10 = VideoCapture_EncoderStateChangeParams_ctor
                           (this_00,oldState_,1,newState_,resultCode_);
    }
    local_4 = 0xffffffff;
    local_14 = 8;
    VideoCapture_EncoderThreadImpl_enqueueFuncMessage(this,&local_14);
  }
  ExceptionList = local_c;
  return;
}

