// addr: 0x01006570
// name: VideoCapture_postStartMessage_thunk
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VideoCapture_postStartMessage_thunk(void) */

void VideoCapture_postStartMessage_thunk(void)

{
  void *in_stack_00000004;
  
                    /* Thin wrapper that forwards to the message producer at 010059b0. Naming is
                       based on the target creating FuncMessage type 1 for the encoder thread. */
  VideoCapture_postStartMessage(in_stack_00000004);
  return;
}

