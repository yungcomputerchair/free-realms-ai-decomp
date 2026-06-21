// addr: 0x00d0f370
// name: VideoCapture_JPG_ScratchBuffer_deleteOwned
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_JPG_ScratchBuffer_deleteOwned(void ** slot) */

void __fastcall VideoCapture_JPG_ScratchBuffer_deleteOwned(void **slot)

{
  void *_Memory;
  
                    /* Destroys and frees a JPG scratch-buffer object from a pointer slot. Evidence:
                       paired with FUN_00d2db30, which allocates and zeros an 0x83d-byte scratch
                       object, in JPG import/worker paths. */
  _Memory = *slot;
  if (_Memory != (void *)0x0) {
    FUN_00d2df00();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

