// addr: 0x01006590
// name: VideoCapture_postShutdownMessage_thunk
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VideoCapture_postShutdownMessage_thunk(void) */

void VideoCapture_postShutdownMessage_thunk(void)

{
  void *in_stack_00000004;
  
                    /* Thin wrapper that forwards to the message producer at 01005ad0. Naming is
                       based on the target creating FuncMessage type 3 for the encoder thread. */
  VideoCapture_postShutdownMessage(in_stack_00000004);
  return;
}

