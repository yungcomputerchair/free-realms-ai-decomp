// addr: 0x01005ad0
// name: VideoCapture_postShutdownMessage
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_postShutdownMessage(void * payload) */

void VideoCapture_postShutdownMessage(void *payload)

{
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a small payload object, wraps it as FuncMessage type 3, and
                       enqueues it to the encoder thread. The exact payload class is unclear, but
                       the dispatch code treats this as one of the video thread messages. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163251b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = Mem_Alloc(0x14);
  local_4 = 0;
  if (local_14 == (void *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_01004c60(payload);
  }
  local_4 = 0xffffffff;
  local_14 = (void *)0x3;
  FUN_01004e60(&local_14);
  ExceptionList = local_c;
  return;
}

