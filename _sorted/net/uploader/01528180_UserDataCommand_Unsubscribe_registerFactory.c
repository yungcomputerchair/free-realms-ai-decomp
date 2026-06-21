// addr: 0x01528180
// name: UserDataCommand_Unsubscribe_registerFactory
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_Unsubscribe_registerFactory(void * registry) */

void * __fastcall UserDataCommand_Unsubscribe_registerFactory(void *registry)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x10 bytes, constructs UserDataCommand_Unsubscribe, and registers
                       it via the registry callback at vtable offset 0x48. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b978b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x10);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = UserDataCommand_Unsubscribe_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)registry + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

