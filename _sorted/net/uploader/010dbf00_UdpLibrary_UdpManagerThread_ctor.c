// addr: 0x010dbf00
// name: UdpLibrary_UdpManagerThread_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UdpLibrary_UdpManagerThread_ctor(void * this) */

void * __thiscall UdpLibrary_UdpManagerThread_ctor(void *this)

{
  uint uVar1;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UdpLibrary_UdpManagerThread object: installs the class
                       vtable/base state and initializes owned fields. It stores and AddRefs/starts
                       the manager callback object plus a thread parameter. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164c128;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  UdpLibrary_UdpPlatformThreadObject_ctor(this);
  *(undefined ***)this = UdpLibrary::UdpManagerThread::vftable;
  *(undefined4 **)((int)this + 0x14) = in_stack_00000004;
  local_4 = 0;
  (**(code **)*in_stack_00000004)(uVar1);
  *(undefined4 *)((int)this + 0x1c) = in_stack_00000008;
  *(undefined1 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

