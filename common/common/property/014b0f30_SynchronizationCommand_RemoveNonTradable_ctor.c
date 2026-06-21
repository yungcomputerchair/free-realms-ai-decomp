// addr: 0x014b0f30
// name: SynchronizationCommand_RemoveNonTradable_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SynchronizationCommand_RemoveNonTradable_ctor(undefined4 *param_1)

{
  void *value;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SynchronizationCommand_RemoveNonTradable, installs its vtable, and
                       sets object kind 1. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6ee8;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  SynchronizationCommand_ChangeFlags_ctor(param_1);
  local_4 = 0;
  *param_1 = SynchronizationCommand_RemoveNonTradable::vftable;
  SynchronizationCommand_setObjectKind2(param_1,(void *)0x1,value);
  ExceptionList = local_c;
  return param_1;
}

