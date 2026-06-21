// addr: 0x00d0f890
// name: VideoCapture_JPG_ScratchBufferPtr_assignDeleting
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_JPG_ScratchBufferPtr_assignDeleting(void ** slot, void *
   scratch) */

void __thiscall
VideoCapture_JPG_ScratchBufferPtr_assignDeleting(void *this,void **slot,void *scratch)

{
  void *_Memory;
  
                    /* Assigns a JPG scratch-buffer pointer, deleting the previous scratch object
                       through FUN_00d2df00. Evidence: VideoCapture_JPG_importFrame calls it after
                       allocating the scratch buffer with FUN_00d2db30. */
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    FUN_00d2df00();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(void ***)this = slot;
  return;
}

