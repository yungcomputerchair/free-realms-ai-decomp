// addr: 0x014f9f10
// name: CommandObject_While_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_While_ctor(undefined4 *param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_While with base CommandObject setup and initial
                       return-map entries. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3223;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_4);
  local_4 = 0;
  *param_1 = CommandObject_While::vftable;
  param_1[2] = CommandObject_While::vftable;
  *(undefined1 *)(param_1 + 0x20) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_While",0x13);
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x47] = 0x196;
  pvVar3 = EvaluationEnvironment_getOriginCard(param_4);
  param_1[0x19] = pvVar3;
  pvVar3 = Mem_Alloc(0x18);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ReturnValueMap_ctor(uVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1c] = uVar4;
  uVar4 = 0;
  pvVar3 = EvaluationEnvironment_getMember14(param_4);
  if (pvVar3 != (void *)0x0) {
    EvaluationEnvironment_getMember14(param_4);
    uVar4 = GamePlayer_getPlayerId();
  }
  ReturnValueMap_setInteger(4,uVar4);
  uVar4 = 0;
  pvVar3 = EvaluationEnvironment_getOriginCard(param_4);
  if (pvVar3 != (void *)0x0) {
    EvaluationEnvironment_getOriginCard(param_4);
    uVar4 = PlayElement_getId();
  }
  ReturnValueMap_setInteger(3,uVar4);
  FUN_014181b0(5,param_2);
  FUN_014181b0(0x12,param_3);
  bVar1 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
  if (bVar1) {
    set_value_boolean(0x24,true);
  }
  ExceptionList = local_c;
  return param_1;
}

