// addr: 0x014e5f40
// name: ArchCommand_GetArchetypeID_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall ArchCommand_GetArchetypeID_createAndRegister(int *param_1)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates ArchCommand_GetArchetypeID and registers it through the factory
                       vtable callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016afedb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x10);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = ArchCommand_GetArchetypeID_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

