// addr: 0x010059b0
// name: VideoCapture_postStartMessage
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_postStartMessage(void * payload) */

void VideoCapture_postStartMessage(void *payload)

{
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x70-byte payload, wraps it as FuncMessage type 1, and enqueues
                       it to the encoder thread. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016324bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = Mem_Alloc(0x70);
  local_4 = 0;
  if (local_14 == (void *)0x0) {
    local_10 = (void *)0x0;
  }
  else {
    local_10 = VideoCapture_InitEncoderParams_copyCtor(local_14,payload);
  }
  local_4 = 0xffffffff;
  local_14 = (void *)0x1;
  FUN_01004e60(&local_14);
  ExceptionList = local_c;
  return;
}

