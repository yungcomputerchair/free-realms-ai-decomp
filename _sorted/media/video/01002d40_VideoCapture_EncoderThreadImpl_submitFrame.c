// addr: 0x01002d40
// name: VideoCapture_EncoderThreadImpl_submitFrame
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int VideoCapture_EncoderThreadImpl_submitFrame(void) */

int VideoCapture_EncoderThreadImpl_submitFrame(void)

{
  int iVar1;
  
                    /* Thin thunk for frame submission/processing used by handleFuncMessageFrame.
                       Evidence: that handler calls it for states 1, 2, or 5 and reports an
                       EncoderStateChangeParams result. */
  iVar1 = FUN_01002920();
  return iVar1;
}

