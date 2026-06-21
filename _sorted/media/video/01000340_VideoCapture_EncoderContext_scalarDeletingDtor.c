// addr: 0x01000340
// name: VideoCapture_EncoderContext_scalarDeletingDtor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_EncoderContext_scalarDeletingDtor(void * this, char
   flags_) */

void * __thiscall VideoCapture_EncoderContext_scalarDeletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper that releases encoder-context owned state
                       through VideoCapture_EncoderContext_deleteOwned and optionally frees this.
                       Evidence: same MSVC deleting-destructor pattern used by nearby video
                       parameter classes. */
  VideoCapture_EncoderContext_deleteOwned(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

