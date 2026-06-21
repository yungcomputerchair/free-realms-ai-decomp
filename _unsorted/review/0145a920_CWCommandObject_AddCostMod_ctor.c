// addr: 0x0145a920
// name: CWCommandObject_AddCostMod_ctor
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CWCommandObject_AddCostMod_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWCommandObject_AddCostMod by invoking the shared cost-mod command
                       initializer and assigning the class name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01505280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *param_1 = CWCommandObject_AddCostMod::vftable;
  param_1[2] = CWCommandObject_AddCostMod::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CWCommandObject_AddCostMod",0x1a);
  ExceptionList = local_c;
  return param_1;
}

