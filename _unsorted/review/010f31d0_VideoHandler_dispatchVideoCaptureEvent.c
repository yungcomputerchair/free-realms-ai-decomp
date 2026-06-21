// addr: 0x010f31d0
// name: VideoHandler_dispatchVideoCaptureEvent
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoHandler_dispatchVideoCaptureEvent(void * thisPtr, int unused_, int
   eventId_, int unused2_, int result_) */

void __thiscall
VideoHandler_dispatchVideoCaptureEvent
          (void *this,void *thisPtr,int unused_,int eventId_,int unused2_,int result_)

{
  char *pcVar1;
  
                    /* Maps capture event IDs to VideoHandler Lua/callback names for init, reinit,
                       start, and stop, then invokes the registered callback when present. */
  if (*(code **)((int)this + 8) != (code *)0x0) {
    switch(unused_) {
    case 1:
      pcVar1 = "VideoHandler:OnVideoCaptureInit";
      break;
    case 2:
      pcVar1 = "VideoHandler:OnVideoCaptureReinit";
      break;
    case 3:
    case 4:
      pcVar1 = "VideoHandler:OnVideoCaptureStart";
      break;
    case 5:
      pcVar1 = "VideoHandler:OnVideoCaptureStop";
      break;
    default:
      goto switchD_010f31e3_default;
    }
    if ((unused_ != 3) || (unused2_ != 0)) {
      (**(code **)((int)this + 8))(pcVar1,unused2_);
    }
  }
switchD_010f31e3_default:
  return;
}

