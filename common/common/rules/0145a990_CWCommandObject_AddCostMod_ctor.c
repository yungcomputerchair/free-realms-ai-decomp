// addr: 0x0145a990
// name: CWCommandObject_AddCostMod_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CWCommandObject_AddCostMod_ctor
          (undefined4 *param_1,bool param_2,int param_3,void *param_4,void *param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CWCommandObject_AddCostMod by chaining
                       CommandObject_ModifyProperty construction, installing AddCostMod vtables, and
                       setting its type name string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ModifyProperty_ctor(param_1,param_2,param_3,param_4,param_5,true);
  local_4 = 0;
  *param_1 = CWCommandObject_AddCostMod::vftable;
  param_1[2] = CWCommandObject_AddCostMod::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CWCommandObject_AddCostMod",0x1a);
  ExceptionList = local_c;
  return param_1;
}

