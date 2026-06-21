// addr: 0x01003830
// name: VideoCapture_EncoderStateChangeParams_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_EncoderStateChangeParams_ctor(void * this, int oldState_,
   int eventId_, int newState_, int resultCode_) */

void * __thiscall
VideoCapture_EncoderStateChangeParams_ctor
          (void *this,int oldState_,int eventId_,int newState_,int resultCode_)

{
                    /* Constructs EncoderStateChangeParams with old/event/new/result fields after
                       installing FuncParams and EncoderStateChangeParams vtables. Evidence:
                       explicit VideoCapture::EncoderStateChangeParams vtable and all message
                       handlers allocate 0x14-byte state-change messages through it. */
  *(undefined ***)this = VideoCapture::FuncParams::vftable;
  *(int *)((int)this + 4) = oldState_;
  *(int *)((int)this + 8) = eventId_;
  *(undefined ***)this = VideoCapture::EncoderStateChangeParams::vftable;
  *(int *)((int)this + 0xc) = newState_;
  *(int *)((int)this + 0x10) = resultCode_;
  return this;
}

