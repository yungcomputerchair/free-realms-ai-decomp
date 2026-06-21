// addr: 0x0142f4e0
// name: FUN_0142f4e0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_0142f4e0(void * factory) */

void * __fastcall FUN_0142f4e0(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/registration wrapper allocating 0x14 bytes, constructing via
                       FUN_0142f1a0, and registering through a virtual method. Exact class unknown.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169611b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x14);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = LobbyCommand_InfoEnumMessage_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

