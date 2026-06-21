// addr: 0x01508f60
// name: CommandObject_GetTarget_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_GetTarget_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,void *param_5)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_GetTarget with action/player/origin return values
                       from the EvaluationEnvironment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5603;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_5);
  local_4 = 0;
  *param_1 = CommandObject_GetTarget::vftable;
  param_1[2] = CommandObject_GetTarget::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_GetTarget",0x17);
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x47] = 0xfa;
  pvVar2 = EvaluationEnvironment_getOriginCard(param_5);
  param_1[0x19] = pvVar2;
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
  uVar3 = 0;
  pvVar2 = EvaluationEnvironment_getMember14(param_5);
  if (pvVar2 != (void *)0x0) {
    EvaluationEnvironment_getMember14(param_5);
    uVar3 = GamePlayer_getPlayerId();
  }
  ReturnValueMap_setInteger(4,uVar3);
  uVar3 = 0;
  pvVar2 = EvaluationEnvironment_getOriginCard(param_5);
  if (pvVar2 != (void *)0x0) {
    EvaluationEnvironment_getOriginCard(param_5);
    uVar3 = PlayElement_getId();
  }
  ReturnValueMap_setInteger(3,uVar3);
  uVar3 = 0;
  pvVar2 = CommandObject_getActionFromEnvironment(param_5);
  if (pvVar2 != (void *)0x0) {
    CommandObject_getActionFromEnvironment(param_5);
    uVar3 = FUN_01321f20();
  }
  ReturnValueMap_setInteger(5,uVar3);
  FUN_014181b0(0xe,param_2);
  FUN_014181b0(0xd,param_3);
  if (param_4 < 0x423) {
    if (param_4 == 0x422) {
      uVar3 = 0x36;
    }
    else if (param_4 == 1) {
      uVar3 = 1;
    }
    else {
      if (param_4 != 2) {
        ExceptionList = local_c;
        return param_1;
      }
      uVar3 = 2;
    }
  }
  else {
    if (param_4 != 0x423) {
      ExceptionList = local_c;
      return param_1;
    }
    uVar3 = 0x37;
  }
  ReturnValueMap_setInteger(7,uVar3);
  ExceptionList = local_c;
  return param_1;
}

