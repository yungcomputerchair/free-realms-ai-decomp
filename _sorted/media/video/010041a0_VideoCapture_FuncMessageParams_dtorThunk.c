// addr: 0x010041a0
// name: VideoCapture_FuncMessageParams_dtorThunk
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VideoCapture_FuncMessageParams_dtorThunk(void) */

void VideoCapture_FuncMessageParams_dtorThunk(void)

{
                    /* Thin destructor thunk in the FuncMessage parameter area. Evidence: called by
                       message cleanup paths near EncoderThreadImpl and immediately tail-calls
                       FUN_01004060. */
  FUN_01004060();
  return;
}

