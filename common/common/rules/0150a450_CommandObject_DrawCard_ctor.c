// addr: 0x0150a450
// name: CommandObject_DrawCard_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_DrawCard_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,void *param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_DrawCard and logs the draw target player. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5963;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_6);
  uVar3 = 0;
  local_4 = 0;
  *param_1 = CommandObject_DrawCard::vftable;
  param_1[2] = CommandObject_DrawCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_DrawCard",0x16);
  param_1[0x4a] = param_3;
  param_1[0x49] = param_2;
  param_1[0x4b] = param_4;
  pvVar1 = EvaluationEnvironment_getMember14(param_6);
  param_1[0x4c] = pvVar1;
  pvVar1 = EvaluationEnvironment_getGame(param_6);
  param_1[0xc] = pvVar1;
  pvVar1 = EvaluationEnvironment_getOriginCard(param_6);
  param_1[0x19] = pvVar1;
  param_1[0x4d] = param_5;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x4e] = 0;
  param_1[0x47] = 0x16d;
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = GamePlayer_getPlayerId();
  Game_logGeneral((void *)param_1[0xc],"DRAWCARD created. drawing to player: %d\n",uVar2);
  FUN_013876d0(param_1[0x4c]);
  FUN_013871f0(param_1[0x4c]);
  pvVar1 = Mem_Alloc(0x18);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ReturnValueMap_ctor();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1c] = uVar2;
  uVar2 = 0;
  pvVar1 = EvaluationEnvironment_getMember14(param_6);
  if (pvVar1 != (void *)0x0) {
    EvaluationEnvironment_getMember14(param_6);
    uVar2 = GamePlayer_getPlayerId();
  }
  ReturnValueMap_setInteger(4,uVar2);
  pvVar1 = EvaluationEnvironment_getOriginCard(param_6);
  if (pvVar1 != (void *)0x0) {
    EvaluationEnvironment_getOriginCard(param_6);
    uVar3 = PlayElement_getId();
  }
  ReturnValueMap_setInteger(3,uVar3);
  ReturnValueMap_setInteger(0x15,param_1[0x4d]);
  ReturnValueMap_setInteger(0x1c,param_1[0x49]);
  ReturnValueMap_setInteger(0x38,param_1[0x4b]);
  ExceptionList = local_c;
  return param_1;
}

