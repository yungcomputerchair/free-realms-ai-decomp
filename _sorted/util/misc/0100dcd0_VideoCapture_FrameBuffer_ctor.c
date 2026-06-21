// addr: 0x0100dcd0
// name: VideoCapture_FrameBuffer_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * VideoCapture_FrameBuffer_ctor(undefined4 * this, undefined4
   format_, undefined4 size_) */

undefined4 * __thiscall VideoCapture_FrameBuffer_ctor(void *this,undefined4 format_,uint size_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a VideoCapture::FrameBuffer, setting IConstBuffer/IBuffer base
                       vtables then FrameBuffer vtable, assigning a unique id, format, allocated
                       data pointer, size, and zeroed state. */
  puStack_8 = &LAB_01633740;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CaptureCommon::IConstBuffer::vftable;
  *(undefined ***)this = CaptureCommon::IBuffer::vftable;
  local_4 = 1;
  *(undefined ***)this = VideoCapture::FrameBuffer::vftable;
  DAT_01cb5e58 = DAT_01cb5e58 + 1;
  *(int *)((int)this + 4) = DAT_01cb5e58;
  *(undefined4 *)((int)this + 8) = format_;
  pvVar1 = Mem_Alloc(size_);
  *(void **)((int)this + 0xc) = pvVar1;
  *(uint *)((int)this + 0x10) = size_;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

