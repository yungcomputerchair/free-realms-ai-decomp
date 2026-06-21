// addr: 0x014ad3c0
// name: SynchronizationCommand_LockTournament_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SynchronizationCommand_LockTournament_ctor(undefined4 *param_1)

{
  void *value;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SynchronizationCommand_LockTournament, installs its vtable, and
                       sets object kind 2. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6698;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  SynchronizationCommand_ChangeFlags_ctor(param_1);
  local_4 = 0;
  *param_1 = SynchronizationCommand_LockTournament::vftable;
  SynchronizationCommand_setObjectKind1(param_1,(void *)0x2,value);
  ExceptionList = local_c;
  return param_1;
}

