// addr: 0x0150f290
// name: CommandObject_AddKeyword_ctor
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_AddKeyword_ctor(undefined4 *param_1,char param_2,undefined4 param_3,void *param_4)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_AddKeyword, sets its command-object vtable/name, and
                       resolves target/origin card data from the EvaluationEnvironment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b6516;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_4);
  local_4 = 0;
  *param_1 = CommandObject_AddKeyword::vftable;
  param_1[2] = CommandObject_AddKeyword::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_AddKeyword",0x18);
  if (param_2 == '\0') {
    pvVar2 = EvaluationEnvironment_getOriginCard(param_4);
  }
  else {
    pvVar2 = EvaluationEnvironment_resolveTarget(param_4);
  }
  param_1[0x1a] = pvVar2;
  FUN_013010e0(param_3);
  pvVar2 = EvaluationEnvironment_getOriginCard(param_4);
  param_1[0x19] = pvVar2;
  FUN_01301590(param_4);
  ExceptionList = local_c;
  return param_1;
}

