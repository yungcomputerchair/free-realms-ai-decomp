// addr: 0x01005ce0
// name: VideoCapture_handleFuncMessageComplete
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_handleFuncMessageComplete(void * message) */

void __thiscall VideoCapture_handleFuncMessageComplete(void *this,void *message)

{
  int oldState_;
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 local_5c;
  void *local_58;
  undefined1 local_54 [72];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles FuncMessage type 4 for completion/error cases, posts a response
                       message type 8 and then creates/enqueues a larger follow-up message type 9.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01632629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  oldState_ = VideoCapture_EncoderThreadImpl_getState();
  if ((oldState_ == 3) || (oldState_ == 4)) {
    VideoCapture_EncoderThreadImpl_finishEncoderOutput(*(void **)((int)this + 0x3c0));
    iVar3 = *(int *)((int)message + 4);
    pvVar1 = Mem_Alloc(0x14);
    if (iVar3 == 0) {
      local_4 = 1;
      if (pvVar1 == (void *)0x0) {
        local_58 = (void *)0x0;
      }
      else {
        iVar2 = 0;
        iVar3 = VideoCapture_EncoderThreadImpl_getState();
        local_58 = VideoCapture_EncoderStateChangeParams_ctor(pvVar1,oldState_,5,iVar3,iVar2);
      }
    }
    else {
      local_58 = (void *)0x0;
      local_4 = 0;
      if (pvVar1 != (void *)0x0) {
        iVar3 = *(int *)(iVar3 + 4);
        iVar2 = VideoCapture_EncoderThreadImpl_getState();
        local_58 = VideoCapture_EncoderStateChangeParams_ctor(pvVar1,oldState_,5,iVar2,iVar3);
      }
    }
    local_4 = 0xffffffff;
    local_5c = 8;
    VideoCapture_EncoderThreadImpl_enqueueFuncMessage(this,&local_5c);
    FUN_01001d00();
    local_4 = 2;
    VideoCapture_EncoderThreadImpl_getDestFileName(local_54);
    pvVar1 = Mem_Alloc(0x50);
    local_4._0_1_ = 3;
    if (pvVar1 == (void *)0x0) {
      local_58 = (void *)0x0;
    }
    else {
      local_58 = VideoCapture_DestFileDoneParams_ctor(pvVar1,local_54);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    local_5c = 9;
    VideoCapture_EncoderThreadImpl_enqueueFuncMessage(this,&local_5c);
    local_4 = 0xffffffff;
    FUN_01001d70();
  }
  ExceptionList = local_c;
  return;
}

