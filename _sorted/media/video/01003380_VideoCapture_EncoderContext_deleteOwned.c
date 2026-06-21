// addr: 0x01003380
// name: VideoCapture_EncoderContext_deleteOwned
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_EncoderContext_deleteOwned(void ** slot) */

void __fastcall VideoCapture_EncoderContext_deleteOwned(void **slot)

{
  void *_Memory;
  
                    /* Deletes the encoder context object stored in a slot via FUN_01002ec0 and
                       free. Evidence: multiple scalar deleting destructors in the EncoderThreadImpl
                       area call this cleanup helper. */
  _Memory = *slot;
  if (_Memory != (void *)0x0) {
    FUN_01002ec0();
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

