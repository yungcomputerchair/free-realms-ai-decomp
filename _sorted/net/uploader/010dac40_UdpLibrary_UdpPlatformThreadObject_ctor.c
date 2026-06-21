// addr: 0x010dac40
// name: UdpLibrary_UdpPlatformThreadObject_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UdpLibrary_UdpPlatformThreadObject_ctor(void * this) */

void * __fastcall UdpLibrary_UdpPlatformThreadObject_ctor(void *this)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UdpPlatformThreadObject over UdpGuardedRefCount and allocates an
                       8-byte platform-thread state block. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164bf98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UdpLibrary_UdpGuardedRefCount_ctor(this);
  local_4 = 0;
  *(undefined ***)this = UdpLibrary::UdpPlatformThreadObject::vftable;
  puVar1 = Mem_Alloc(8);
  *(undefined4 **)((int)this + 0x10) = puVar1;
  *puVar1 = 0;
  *(undefined1 *)(*(int *)((int)this + 0x10) + 4) = 0;
  ExceptionList = local_c;
  return this;
}

