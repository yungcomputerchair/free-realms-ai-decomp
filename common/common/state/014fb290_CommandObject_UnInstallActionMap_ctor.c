// addr: 0x014fb290
// name: CommandObject_UnInstallActionMap_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_UnInstallActionMap_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_UnInstallActionMap by installing vtables, assigning
                       its command name, and zeroing two action-map fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CommandObject_UnInstallActionMap::vftable;
  param_1[2] = CommandObject_UnInstallActionMap::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_UnInstallActionMap",0x20);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  ExceptionList = local_c;
  return param_1;
}

