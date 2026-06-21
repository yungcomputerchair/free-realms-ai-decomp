// addr: 0x0140c210
// name: NetworkCommand_createAndRegister
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_createAndRegister(void * factory) */

void * __fastcall NetworkCommand_createAndRegister(void *factory)

{
  uint uVar1;
  void *this;
  void *extraout_EAX;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a base NetworkCommand, constructs it, and registers it through the
                       factory callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691f0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(4);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    NetworkCommand_ctor(this);
    pvVar2 = extraout_EAX;
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

