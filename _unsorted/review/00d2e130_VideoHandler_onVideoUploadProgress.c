// addr: 0x00d2e130
// name: VideoHandler_onVideoUploadProgress
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoHandler_onVideoUploadProgress(void * this, void * request, void *
   progressPayload) */

void __thiscall VideoHandler_onVideoUploadProgress(void *this,void *request,void *progressPayload)

{
                    /* Invokes the callback stored at this+4 with the event string
                       VideoHandler:OnVideoUploadProgress and the progress payload when present. */
  if (*(code **)((int)this + 4) != (code *)0x0) {
    (**(code **)((int)this + 4))("VideoHandler:OnVideoUploadProgress",progressPayload);
  }
  return;
}

