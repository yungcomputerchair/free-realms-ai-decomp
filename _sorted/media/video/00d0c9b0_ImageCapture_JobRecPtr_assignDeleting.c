// addr: 0x00d0c9b0
// name: ImageCapture_JobRecPtr_assignDeleting
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ImageCapture_JobRecPtr_assignDeleting(void ** slot, void * jobRec) */

void __thiscall ImageCapture_JobRecPtr_assignDeleting(void *this,void **slot,void *jobRec)

{
  void *_Memory;
  
                    /* Assigns an ImageCapture::JobRec pointer and destroys the previous record via
                       FUN_00d0c560 before freeing. Evidence: VideoCapture_JPG_openEncoder calls it
                       with the object created by ImageCapture_JobRec_init. */
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    FUN_00d0c560();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(void ***)this = slot;
  return;
}

