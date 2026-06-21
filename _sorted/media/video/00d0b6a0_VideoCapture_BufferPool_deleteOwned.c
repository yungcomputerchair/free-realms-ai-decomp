// addr: 0x00d0b6a0
// name: VideoCapture_BufferPool_deleteOwned
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_BufferPool_deleteOwned(void ** slot) */

void __fastcall VideoCapture_BufferPool_deleteOwned(void **slot)

{
  void *_Memory;
  
                    /* Deletes the BufferPool-like object stored in the slot by running FUN_00f8e9b0
                       before freeing the pointer. Evidence: used as cleanup in
                       VideoCapture_JPG_importFrame and other image/video paths after FUN_00f8e5c0
                       constructs a CaptureCommon::Buffer pool. */
  _Memory = *slot;
  if (_Memory != (void *)0x0) {
    FUN_00f8e9b0();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

