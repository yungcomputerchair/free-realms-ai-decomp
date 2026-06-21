// addr: 0x010e5220
// name: UdpLibrary_UdpConnection_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UdpLibrary_UdpConnection_ctor(void * this, void * params) */

void * __thiscall UdpLibrary_UdpConnection_ctor(void *this,void *params)

{
  undefined4 extraout_EAX;
  void *pvVar1;
  undefined4 *puStack0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UdpLibrary::UdpConnection, initializes guarded refcount/base
                       state, seeds random/encryption fields, initializes connection fields, and
                       installs the UdpConnection vtable. Evidence is
                       UdpLibrary::UdpConnection::vftable and UdpConnection_initFields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164cf1f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UdpLibrary_UdpGuardedRefCount_ctor(this);
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  local_4 = 0;
  *(undefined ***)this = UdpLibrary::UdpConnection::vftable;
  FUN_010da850();
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  FUN_010da690();
  local_4._0_1_ = 1;
  FUN_010da690();
  local_4._0_1_ = 2;
  (*(code *)**(undefined4 **)this)();
  local_4._0_1_ = 3;
  FUN_010da6d0();
  puStack0000000c = &uStack_30;
  local_4._0_1_ = 4;
  FUN_010da860(&stack0x00000008);
  UdpConnection_initFields(params);
  *(undefined4 *)((int)this + 0x160) = in_stack_00000010;
  *(undefined4 *)((int)this + 0x8c) = 0;
  uStack_30 = 0x10e5304;
  Soe_nextRandomSeed((int *)(*(int *)((int)this + 0x94) + 0x1e0));
  *(undefined4 *)((int)this + 0x98) = extraout_EAX;
  uStack_30 = 0x10e5319;
  FUN_010dd250();
  uStack_30 = 0x10e5323;
  puStack0000000c = Mem_Alloc(0x250);
  local_4._0_1_ = 5;
  if (puStack0000000c == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_010fe4f0(puStack0000000c);
  }
  uStack_30 = 0;
  local_4._0_1_ = 4;
  *(void **)((int)this + 0x264) = pvVar1;
  FUN_010fe140(0);
  uStack_30 = 0x10e535b;
  FUN_010e5150();
  local_4._0_1_ = 3;
  FUN_010da6e0();
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*(int *)this + 4))();
  ExceptionList = local_c;
  return this;
}

