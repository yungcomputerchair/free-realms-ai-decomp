// addr: 0x010006b0
// name: VideoCapture_FuncMessageParam_deleteOwnedThunk
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_FuncMessageParam_deleteOwnedThunk(void ** slot) */

void __fastcall VideoCapture_FuncMessageParam_deleteOwnedThunk(void **slot)

{
  void **paramSlot;
  
                    /* Destructor cleanup thunk that releases and frees a referenced FuncMessage
                       parameter object. Evidence: calls VideoCapture_FuncMessageParam_release
                       before _free on the stored pointer. */
  paramSlot = *slot;
  if (paramSlot != (void **)0x0) {
    VideoCapture_FuncMessageParam_release(paramSlot);
                    /* WARNING: Subroutine does not return */
    _free(paramSlot);
  }
  return;
}

