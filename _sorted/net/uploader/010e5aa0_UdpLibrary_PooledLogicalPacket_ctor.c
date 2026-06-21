// addr: 0x010e5aa0
// name: UdpLibrary_PooledLogicalPacket_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UdpLibrary_PooledLogicalPacket_ctor(void * this, int poolId_, int
   bufferSize_) */

void * __thiscall UdpLibrary_PooledLogicalPacket_ctor(void *this,int poolId_,int bufferSize_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UdpLibrary::PooledLogicalPacket, initializes status fields,
                       allocates its payload buffer, stores pool/buffer metadata, and calls a packet
                       reset helper. The vtable directly identifies the class. */
  puStack_8 = &LAB_0164d048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = UdpLibrary::PooledLogicalPacket::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 0;
  *(int *)((int)this + 0x1c) = bufferSize_;
  pvVar1 = Mem_Alloc(bufferSize_);
  *(void **)((int)this + 0x14) = pvVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 0x20) = poolId_;
  FUN_010ddf60(this);
  ExceptionList = local_c;
  return this;
}

