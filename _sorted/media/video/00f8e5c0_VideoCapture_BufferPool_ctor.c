// addr: 0x00f8e5c0
// name: VideoCapture_BufferPool_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_BufferPool_ctor(void * this, int bufferType_, int
   bufferSize_) */

void * __thiscall VideoCapture_BufferPool_ctor(void *this,int bufferType_,int bufferSize_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a buffer pool with id, type/size fields, synchronization, and two
                       arrays of CaptureCommon::Buffer* for free/in-use buffers. Evidence: explicit
                       SoeUtil::Array<CaptureCommon::Buffer*> vtables and callers named
                       VideoCapture_BufferPool_acquire. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01629ae1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DAT_01cb40bc = DAT_01cb40bc + 1;
  *(int *)this = DAT_01cb40bc;
  *(int *)((int)this + 8) = bufferSize_;
  *(int *)((int)this + 4) = bufferType_;
  FUN_00fc4580(4000);
  *(undefined ***)((int)this + 0x50) = SoeUtil::Array<CaptureCommon::Buffer*,0,1>::vftable;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined ***)((int)this + 0x60) = SoeUtil::Array<CaptureCommon::Buffer*,0,1>::vftable;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  ExceptionList = local_c;
  return this;
}

