// addr: 0x01508b90
// name: CommandObject_GetTopCard_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_GetTopCard_ctor
          (undefined4 *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_GetTopCard with base CommandObject setup and initial
                       ReturnValueMap entries. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5543;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_2);
  local_4 = 0;
  *param_1 = CommandObject_GetTopCard::vftable;
  param_1[2] = CommandObject_GetTopCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_GetTopCard",0x18);
  pvVar2 = EvaluationEnvironment_getGame(param_2);
  param_1[0xc] = pvVar2;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  param_1[0x47] = 0x1b4;
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
  EvaluationEnvironment_getMember14(param_2);
  uVar3 = GamePlayer_getPlayerId();
  ReturnValueMap_setInteger(4,uVar3);
  ReturnValueMap_setInteger(0xf,param_3);
  ReturnValueMap_setInteger(1,param_4);
  ExceptionList = local_c;
  return param_1;
}

