// addr: 0x013d9e30
// name: FUN_013d9e30
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_013d9e30(void * factory) */

void * __fastcall FUN_013d9e30(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/registration wrapper allocating an 8-byte object, constructing with
                       FUN_013d9cf0, and registering it through a virtual method. Concrete class
                       unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c22b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(8);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = NetworkCommand_Ping_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

