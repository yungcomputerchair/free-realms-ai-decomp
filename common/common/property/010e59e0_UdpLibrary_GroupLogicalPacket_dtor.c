// addr: 0x010e59e0
// name: UdpLibrary_GroupLogicalPacket_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UdpLibrary_GroupLogicalPacket_dtor(void * self) */

void __fastcall UdpLibrary_GroupLogicalPacket_dtor(void *self)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a UdpLibrary::GroupLogicalPacket by installing its vftable,
                       releasing the object at offset 0x14, then reverting to the UdpRefCount
                       vftable. Vftable symbols identify both classes. */
  puStack_8 = &LAB_0164d018;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)self = UdpLibrary::GroupLogicalPacket::vftable;
  local_4 = 0;
  Memory_reallocRoundedWithHeader(*(undefined4 *)((int)self + 0x14),0,1,uVar1);
  *(undefined ***)self = UdpLibrary::UdpRefCount::vftable;
  ExceptionList = local_c;
  return;
}

