// addr: 0x012e42d0
// name: PreferencesManagerBase_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall PreferencesManagerBase_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Preferences::PreferencesManagerBase: installs vtable, initializes
                       an inline string to empty, and constructs an owned map/tree member. */
  puStack_8 = &LAB_01672176;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Preferences::PreferencesManagerBase::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_4 = 0;
  FUN_012e4260(uVar1);
  ExceptionList = local_c;
  return param_1;
}

