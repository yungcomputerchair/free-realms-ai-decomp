// addr: 0x00f8e3f0
// name: CaptureCommon_Buffer_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CaptureCommon_Buffer_ctor(void * this, int type_, int size_) */

void * __thiscall CaptureCommon_Buffer_ctor(void *this,int type_,int size_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CaptureCommon::Buffer, assigning IConstBuffer/IBuffer/Buffer
                       vtables, allocating the payload, and assigning a monotonically increasing id.
                       Evidence: explicit CaptureCommon vtable symbols and Mem_Alloc(size). */
  puStack_8 = &LAB_01629aa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = CaptureCommon::IConstBuffer::vftable;
  *(undefined ***)this = CaptureCommon::IBuffer::vftable;
  local_4 = 1;
  *(undefined ***)this = CaptureCommon::Buffer::vftable;
  DAT_01cb40b8 = DAT_01cb40b8 + 1;
  *(int *)((int)this + 4) = DAT_01cb40b8;
  *(int *)((int)this + 8) = type_;
  pvVar1 = Mem_Alloc(size_);
  *(void **)((int)this + 0xc) = pvVar1;
  *(int *)((int)this + 0x10) = size_;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

