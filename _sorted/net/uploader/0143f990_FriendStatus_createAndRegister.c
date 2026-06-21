// addr: 0x0143f990
// name: FriendStatus_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FriendStatus_createAndRegister(void * factory) */

void * __fastcall FriendStatus_createAndRegister(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs FriendStatus, then registers it through a virtual
                       method at offset 0x44. Constructor callee identifies class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016986bb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x60);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = FriendStatus_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x44))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

