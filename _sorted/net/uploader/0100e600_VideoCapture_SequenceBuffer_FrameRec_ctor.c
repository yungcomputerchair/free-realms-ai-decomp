// addr: 0x0100e600
// name: VideoCapture_SequenceBuffer_FrameRec_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_SequenceBuffer_FrameRec_ctor(void * this, int arg1_, int
   frameSize_, int frameCount_) */

void * __thiscall
VideoCapture_SequenceBuffer_FrameRec_ctor(void *this,int arg1_,int frameSize_,int frameCount_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a VideoCapture sequence-buffer frame record, assigns a unique id,
                       allocates frameSize*frameCount bytes, and initializes its FrameRec array
                       member. This appears to be a weak misclassification outside uploader. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016338ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DAT_01cb5e60 = DAT_01cb5e60 + 1;
  *(int *)this = DAT_01cb5e60;
  *(int *)((int)this + 4) = arg1_;
  *(int *)((int)this + 8) = frameSize_;
  *(int *)((int)this + 0xc) = frameSize_ * frameCount_;
  pvVar1 = Mem_Alloc(frameSize_ * frameCount_);
  *(void **)((int)this + 0x10) = pvVar1;
  *(void **)((int)this + 0x14) = pvVar1;
  *(undefined ***)((int)this + 0x18) =
       SoeUtil::Array<VideoCapture::SequenceBuffer::FrameRec,0,1>::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = local_c;
  return this;
}

