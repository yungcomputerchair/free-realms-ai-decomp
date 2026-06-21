// addr: 0x00d2e170
// name: YouTube_FRYouTubeUploaderHandler_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * YouTube_FRYouTubeUploaderHandler_ctor(void * this, void * owner) */

void * __thiscall YouTube_FRYouTubeUploaderHandler_ctor(void *this,void *owner)

{
                    /* Constructs a YouTube::FRYouTubeUploaderHandler, installs its vftable, and
                       stores an owner/context pointer. Evidence is
                       YouTube::FRYouTubeUploaderHandler::vftable and this subsystem's uploader
                       focus. */
  *(undefined ***)this = YouTube::FRYouTubeUploaderHandler::vftable;
  *(void **)((int)this + 4) = owner;
  return this;
}

