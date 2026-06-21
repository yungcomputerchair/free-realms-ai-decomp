// addr: 0x01000660
// name: VideoCapture_EncoderContext_deleteOwnedThunk
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_EncoderContext_deleteOwnedThunk(void ** slot) */

void __fastcall VideoCapture_EncoderContext_deleteOwnedThunk(void **slot)

{
  void **slot_00;
  
                    /* Destructor cleanup thunk that deletes the object stored in a slot via
                       VideoCapture_EncoderContext_deleteOwned and frees it. Evidence: several
                       vtable entries in the encoder context area call this identical pointer-slot
                       cleanup. */
  slot_00 = *slot;
  if (slot_00 != (void **)0x0) {
    VideoCapture_EncoderContext_deleteOwned(slot_00);
                    /* WARNING: Subroutine does not return */
    _free(slot_00);
  }
  return;
}

