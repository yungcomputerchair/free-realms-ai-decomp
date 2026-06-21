// addr: 0x01002dd0
// name: VideoCapture_EncoderThreadImpl_finishEncoderOutput
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_EncoderThreadImpl_finishEncoderOutput(void * this) */

void __fastcall VideoCapture_EncoderThreadImpl_finishEncoderOutput(void *this)

{
  int iVar1;
  
                    /* If the encoder is in state 3 or 4, calls vtable slot 0x24 on the active
                       encoder and records state 5. Evidence: VideoCapture_handleFuncMessageComplete
                       invokes this before posting completion and destination-file-done messages. */
  iVar1 = *(int *)(*(int *)this + 0x98);
  if ((iVar1 == 3) || (iVar1 == 4)) {
    (**(code **)(**(int **)(*(int *)this + 0x88) + 0x24))();
    FUN_010027e0(5);
  }
  return;
}

