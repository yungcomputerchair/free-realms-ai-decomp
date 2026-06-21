// addr: 0x014acf10
// name: SynchronizationCommand_UnlockTournament_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SynchronizationCommand_UnlockTournament_ctor(undefined4 *param_1)

{
  void *value;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SynchronizationCommand_UnlockTournament, installs its vtable, and
                       sets object kind 2. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a65a8;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  SynchronizationCommand_ChangeFlags_ctor(param_1);
  local_4 = 0;
  *param_1 = SynchronizationCommand_UnlockTournament::vftable;
  SynchronizationCommand_setObjectKind2(param_1,(void *)0x2,value);
  ExceptionList = local_c;
  return param_1;
}

