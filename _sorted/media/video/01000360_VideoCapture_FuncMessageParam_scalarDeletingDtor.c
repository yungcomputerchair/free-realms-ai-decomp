// addr: 0x01000360
// name: VideoCapture_FuncMessageParam_scalarDeletingDtor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_FuncMessageParam_scalarDeletingDtor(void * this, char
   flags_) */

void * __thiscall VideoCapture_FuncMessageParam_scalarDeletingDtor(void *this,char flags_)

{
                    /* Scalar deleting destructor wrapper that releases a FuncMessage parameter
                       reference and optionally frees the object. Evidence: it calls
                       VideoCapture_FuncMessageParam_release then conditionally _free(this). */
  VideoCapture_FuncMessageParam_release(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

