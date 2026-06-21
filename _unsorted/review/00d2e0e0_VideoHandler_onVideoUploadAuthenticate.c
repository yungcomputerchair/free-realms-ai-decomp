// addr: 0x00d2e0e0
// name: VideoHandler_onVideoUploadAuthenticate
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoHandler_onVideoUploadAuthenticate(void * this, void * request, void
   * response, void * payload) */

void __thiscall
VideoHandler_onVideoUploadAuthenticate(void *this,void *request,void *response,void *payload)

{
                    /* Invokes the callback stored at this+4 with the event string
                       VideoHandler:OnVideoUploadAuthenticate and the payload argument when the
                       callback is non-null. */
  if (*(code **)((int)this + 4) != (code *)0x0) {
    (**(code **)((int)this + 4))("VideoHandler:OnVideoUploadAuthenticate",payload);
  }
  return;
}

