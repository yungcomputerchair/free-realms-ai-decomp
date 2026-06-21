// addr: 0x00d2e100
// name: VideoHandler_onVideoUploadPost
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoHandler_onVideoUploadPost(void * this, void * request, void *
   response, void * payload) */

void __thiscall
VideoHandler_onVideoUploadPost(void *this,void *request,void *response,void *payload)

{
                    /* Invokes the callback stored at this+4 with the event string
                       VideoHandler:OnVideoUploadPost and the payload argument when present. */
  if (*(code **)((int)this + 4) != (code *)0x0) {
    (**(code **)((int)this + 4))("VideoHandler:OnVideoUploadPost",payload);
  }
  return;
}

