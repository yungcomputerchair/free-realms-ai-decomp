// addr: 0x01002e10
// name: VideoCapture_EncoderThreadImpl_stopEncoder
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VideoCapture_EncoderThreadImpl_stopEncoder(void) */

void VideoCapture_EncoderThreadImpl_stopEncoder(void)

{
                    /* Thin thunk used by handleFuncMessageStop before it posts a state-change
                       message from active states to stopped. Evidence: sole named caller is
                       VideoCapture_handleFuncMessageStop. */
  FUN_01002990();
  return;
}

