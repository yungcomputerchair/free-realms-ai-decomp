// addr: 0x0150e910
// name: CommandObject_AddToken_ctor
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_AddToken_ctor
          (undefined4 *param_1,char param_2,undefined4 param_3,undefined4 param_4,void *param_5)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_AddToken, sets its vtable/name, resolves target or
                       origin card from the EvaluationEnvironment, and stores
                       game/player/origin-card fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b6336;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_5);
  local_4 = 0;
  *param_1 = CommandObject_AddToken::vftable;
  param_1[2] = CommandObject_AddToken::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_AddToken",0x16);
  if (param_2 == '\0') {
    pvVar2 = EvaluationEnvironment_getOriginCard(param_5);
  }
  else {
    pvVar2 = EvaluationEnvironment_resolveTarget(param_5);
  }
  param_1[0x1a] = pvVar2;
  param_1[0x4c] = 0;
  FUN_013010e0(param_4);
  FUN_01301590(param_5);
  pvVar2 = EvaluationEnvironment_getGame(param_5);
  param_1[0xc] = pvVar2;
  pvVar2 = EvaluationEnvironment_getMember14(param_5);
  param_1[0x4d] = pvVar2;
  pvVar2 = EvaluationEnvironment_getOriginCard(param_5);
  param_1[0x19] = pvVar2;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x4e] = param_3;
  param_1[0x1f] = 0;
  ExceptionList = local_c;
  return param_1;
}

