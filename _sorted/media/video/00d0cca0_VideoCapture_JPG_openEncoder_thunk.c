// addr: 0x00d0cca0
// name: VideoCapture_JPG_openEncoder_thunk
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void VideoCapture_JPG_openEncoder_thunk(void) */

void VideoCapture_JPG_openEncoder_thunk(void)

{
  undefined4 *in_ECX;
  void *in_stack_00000004;
  
                    /* Tail thunk to VideoCapture_JPG_openEncoder. Evidence: sole body is a call to
                       the already named VideoCapture_JPG_openEncoder and return. */
  VideoCapture_JPG_openEncoder((void *)*in_ECX,in_stack_00000004);
  return;
}

