// addr: 0x00d0ba60
// name: VideoCapture_BufferPoolPtr_assignDeleting
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_BufferPoolPtr_assignDeleting(void ** slot, void *
   bufferPool) */

void __thiscall VideoCapture_BufferPoolPtr_assignDeleting(void *this,void **slot,void *bufferPool)

{
  void *_Memory;
  
                    /* Assigns a CaptureCommon buffer-pool pointer and destroys the previous pool
                       with FUN_00f8e9b0 if non-null. Evidence: called after FUN_00f8e5c0 constructs
                       buffer pools in open/import paths. */
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    FUN_00f8e9b0();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(void ***)this = slot;
  return;
}

