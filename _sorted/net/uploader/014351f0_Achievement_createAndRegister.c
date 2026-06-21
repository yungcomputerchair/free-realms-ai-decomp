// addr: 0x014351f0
// name: Achievement_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Achievement_createAndRegister(void * factory) */

void * __fastcall Achievement_createAndRegister(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs an Achievement, then registers it through a virtual
                       method at offset 0x3c. Constructor callee identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696ddb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x3c);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = Achievement_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x3c))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

