// addr: 0x01505c80
// name: CommandObject_LoseGame_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CommandObject_LoseGame_ctor(undefined4 *param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_LoseGame, resolving its target from the
                       EvaluationEnvironment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4ea8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_2);
  local_4 = 0;
  *param_1 = CommandObject_LoseGame::vftable;
  param_1[2] = CommandObject_LoseGame::vftable;
  param_1[0x49] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_LoseGame",0x16);
  param_1[0x1d] = 10000;
  FUN_01340340(uVar2);
  cVar1 = Game_getFlag_318();
  if (cVar1 != '\0') {
    iVar3 = FUN_01340340(uVar2);
    *(undefined1 *)(iVar3 + 0x363) = 1;
  }
  pvVar4 = EvaluationEnvironment_resolveTarget(param_1 + 0x21);
  if (pvVar4 != (void *)0x0) {
    EvaluationEnvironment_resolveTarget(param_1 + 0x21);
    iVar3 = PlayElement_getId();
    set_integer_value_for_key(0x33,iVar3);
  }
  ExceptionList = local_c;
  return param_1;
}

