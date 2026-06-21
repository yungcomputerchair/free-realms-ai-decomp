// addr: 0x010028c0
// name: VideoCapture_EncoderThreadImpl_getState
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int VideoCapture_EncoderThreadImpl_getState(void) */

int VideoCapture_EncoderThreadImpl_getState(void)

{
  int iVar1;
  
                    /* Thin thunk to the current encoder-thread state getter. Evidence: all
                       handleFuncMessage* routines call it and branch on states 0 through 6 before
                       taking start/frame/encode/stop/complete actions. */
  iVar1 = FUN_01002850();
  return iVar1;
}

