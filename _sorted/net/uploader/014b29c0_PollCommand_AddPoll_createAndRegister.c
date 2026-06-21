// addr: 0x014b29c0
// name: PollCommand_AddPoll_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PollCommand_AddPoll_createAndRegister(void * factory) */

void * __fastcall PollCommand_AddPoll_createAndRegister(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a PollCommand_AddPoll command object and registers it through a
                       factory virtual method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a74ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(8);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = PollCommand_AddPoll_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

