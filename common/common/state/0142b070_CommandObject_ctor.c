// addr: 0x0142b070
// name: CommandObject_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall CommandObject_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the CommandObject base: installs CommandObject vtables,
                       initializes name string, embedded EvaluationEnvironment, flags, ids, and
                       default command fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016958c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayElement_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  *param_1 = CommandObject::vftable;
  param_1[2] = CommandObject::vftable;
  param_1[0x18] = 0xf;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 1;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject",0xd);
  param_1[0xc] = 0;
  ExceptionList = local_c;
  return param_1;
}

