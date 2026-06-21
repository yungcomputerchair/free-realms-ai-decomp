// addr: 0x01000680
// name: VideoCapture_EncoderContext_deleteOwnedThunk2
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_EncoderContext_deleteOwnedThunk2(void ** slot) */

void __fastcall VideoCapture_EncoderContext_deleteOwnedThunk2(void **slot)

{
  void **slot_00;
  
                    /* Second destructor cleanup thunk for an encoder context slot, calling
                       VideoCapture_EncoderContext_deleteOwned and freeing the pointee. Evidence:
                       used by VideoCapture FuncMessage/EncoderThreadImpl cleanup paths. */
  slot_00 = *slot;
  if (slot_00 != (void **)0x0) {
    VideoCapture_EncoderContext_deleteOwned(slot_00);
                    /* WARNING: Subroutine does not return */
    _free(slot_00);
  }
  return;
}

