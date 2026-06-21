// addr: 0x012e4360
// name: PreferencesManager_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall PreferencesManager_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Preferences::PreferencesManager by constructing
                       PreferencesManagerBase and installing the derived vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016721a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PreferencesManagerBase_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = Preferences::PreferencesManager::vftable;
  ExceptionList = local_c;
  return param_1;
}

