// addr: 0x0150cff0
// name: CommandObject_Clone_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CommandObject_Clone_ctor(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_Clone with base CommandObject setup and
                       source/target return values. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5ee3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_2);
  local_4 = 0;
  *param_1 = CommandObject_Clone::vftable;
  param_1[2] = CommandObject_Clone::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_Clone",0x13);
  pvVar2 = EvaluationEnvironment_getOriginCard(param_2);
  param_1[0x19] = pvVar2;
  param_1[0x49] = 0;
  pvVar2 = Mem_Alloc(0x18);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ReturnValueMap_ctor(uVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1c] = uVar3;
  *(undefined1 *)(param_1 + 0x46) = 1;
  param_1[0x47] = 0x13d;
  EvaluationEnvironment_getMember14(param_2);
  uVar3 = GamePlayer_getPlayerId();
  ReturnValueMap_setInteger(4,uVar3);
  uVar3 = PlayElement_getId();
  ReturnValueMap_setInteger(3,uVar3);
  uVar3 = PlayElement_getId();
  ReturnValueMap_setInteger(0xb,uVar3);
  ExceptionList = local_c;
  return param_1;
}

