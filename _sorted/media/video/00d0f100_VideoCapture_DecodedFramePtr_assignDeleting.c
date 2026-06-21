// addr: 0x00d0f100
// name: VideoCapture_DecodedFramePtr_assignDeleting
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_DecodedFramePtr_assignDeleting(void ** slot, void * frame)
    */

void __thiscall VideoCapture_DecodedFramePtr_assignDeleting(void *this,void **slot,void *frame)

{
  void *_Memory;
  
                    /* Assigns a decoded-frame helper pointer and destroys the old object with
                       FUN_00d0e250 if needed. Evidence: VideoCapture_JPG_prepareDecodedFrame is the
                       only caller and uses this as ownership cleanup. */
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    FUN_00d0e250();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(void ***)this = slot;
  return;
}

