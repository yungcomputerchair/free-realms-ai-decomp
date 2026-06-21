// addr: 0x01007cd0
// name: CaptureCommon_JPGEncodeJobCallbackHandler_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CaptureCommon_JPGEncodeJobCallbackHandler_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the job queue callback handler used for
                       VideoCapture::JPG::JPGEncodeJobRec and stores the owner pointer. Evidence is
                       the explicit CaptureCommon vtable literal. */
  puStack_8 = &LAB_016327b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = SoeUtil::JobQueueHandler::vftable;
  local_4 = 0;
  *param_1 = CaptureCommon::JobQueueCallbackHandlerT<VideoCapture::JPG::JPGEncodeJobRec>::vftable;
  param_1[1] = param_2;
  SoeUtil_Semaphore_ctor(param_1 + 2,0,0x7fffffff);
  ExceptionList = local_c;
  return param_1;
}

