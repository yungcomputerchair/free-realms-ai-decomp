// addr: 0x010e5390
// name: UdpLibrary_UdpConnection_ctorWithPacketProcessing
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UdpLibrary_UdpConnection_ctorWithPacketProcessing(void * this, void *
   params) */

void * __thiscall UdpLibrary_UdpConnection_ctorWithPacketProcessing(void *this,void *params)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_EAX;
  void *pvVar3;
  int *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UdpLibrary::UdpConnection, sets up encryption/decryption,
                       processes an initial raw packet, initializes fields, and installs the
                       UdpConnection vtable. Evidence is UdpConnection vtable plus
                       Soe_SetupEncryptDecrypt and UdpConnection_ProcessRawPacket calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164cf8f;
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
  local_4._0_1_ = 4;
  FUN_010da860(in_stack_00000008 + 1);
  UdpConnection_initFields(params);
  *(undefined4 *)((int)this + 0x8c) = 1;
  iVar2 = 0x1ac;
  do {
    *(undefined4 *)((int)this + iVar2 + -0x20) = *(undefined4 *)(iVar2 + *(int *)((int)this + 0x94))
    ;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x1b4);
  iVar2 = *(int *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)(iVar2 + 0x1a8);
  *(undefined4 *)((int)this + 0x194) = *(undefined4 *)(iVar2 + 0x50);
  Soe_nextRandomSeed((int *)(iVar2 + 0x1e0));
  *(undefined4 *)((int)this + 0x184) = extraout_EAX;
  Soe_SetupEncryptDecrypt(this);
  pvVar3 = Mem_Alloc(0x250);
  local_4._0_1_ = 5;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = FUN_010fe4f0(pvVar3);
  }
  local_4._0_1_ = 4;
  *(void **)((int)this + 0x264) = pvVar3;
  FUN_010fe140(0);
  iVar2 = *in_stack_00000008;
  *(uint *)((int)this + 0x98) =
       CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 6),*(undefined1 *)(iVar2 + 7)),
                         *(undefined1 *)(iVar2 + 8)),*(undefined1 *)(iVar2 + 9));
  FUN_010dd250();
  UdpConnection_ProcessRawPacket();
  FUN_010da6d0();
  piVar1 = *(int **)((int)this + 0x94);
  local_4._0_1_ = 6;
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)();
    local_4._0_1_ = 7;
    *(undefined1 *)((int)this + 0x230) = 1;
    FUN_010e4790();
    *(undefined1 *)((int)this + 0x230) = 0;
    local_4._0_1_ = 6;
    (**(code **)(*piVar1 + 4))();
  }
  local_4._0_1_ = 4;
  FUN_010da6e0();
  local_4._0_1_ = 3;
  FUN_010da6e0();
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*(int *)this + 4))();
  ExceptionList = local_c;
  return this;
}

