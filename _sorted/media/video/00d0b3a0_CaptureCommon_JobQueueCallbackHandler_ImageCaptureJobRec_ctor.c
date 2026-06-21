// addr: 0x00d0b3a0
// name: CaptureCommon_JobQueueCallbackHandler_ImageCaptureJobRec_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CaptureCommon_JobQueueCallbackHandler_ImageCaptureJobRec_ctor(void *
   this, void * jobQueue) */

void * __thiscall
CaptureCommon_JobQueueCallbackHandler_ImageCaptureJobRec_ctor(void *this,void *jobQueue)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CaptureCommon::JobQueueCallbackHandlerT<ImageCapture::JobRec>,
                       stores its queue pointer, and initializes a semaphore. Evidence: explicit
                       SoeUtil::JobQueueHandler and
                       CaptureCommon::JobQueueCallbackHandlerT<ImageCapture::JobRec> vtables. */
  puStack_8 = &LAB_016121f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SoeUtil::JobQueueHandler::vftable;
  local_4 = 0;
  *(undefined ***)this = CaptureCommon::JobQueueCallbackHandlerT<ImageCapture::JobRec>::vftable;
  *(void **)((int)this + 4) = jobQueue;
  SoeUtil_Semaphore_ctor((void *)((int)this + 8),0,0x7fffffff);
  ExceptionList = local_c;
  return this;
}

