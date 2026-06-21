// addr: 0x01006580
// name: VideoCapture_postFrameMessage_thunk
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VideoCapture_postFrameMessage_thunk(void) */

void VideoCapture_postFrameMessage_thunk(void)

{
  void *in_stack_00000004;
  
                    /* Thin wrapper that forwards to the message producer at 01005a40. Naming is
                       based on the target creating FuncMessage type 2 for the encoder thread. */
  VideoCapture_postFrameMessage(in_stack_00000004);
  return;
}

