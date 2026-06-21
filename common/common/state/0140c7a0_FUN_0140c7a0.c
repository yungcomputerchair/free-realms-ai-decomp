// addr: 0x0140c7a0
// name: FUN_0140c7a0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0140c7a0(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691feb;
  local_c = ExceptionList;
  if (param_1[0x19] == 0) {
    return;
  }
  ExceptionList = &local_c;
  if (param_2 == 0) {
    EvaluationEnvironment_ctor(DAT_01b839d8 ^ (uint)&stack0xffffff58);
    local_4 = 0;
    EvaluationEnvironment_setGame(param_1[0xc]);
    (**(code **)(*param_1 + 0x168))(local_a0);
    (**(code **)(*param_1 + 0x90))(&stack0xffffff5c);
    bVar1 = Game_getFlag_14d((void *)param_1[0xc]);
    if ((!bVar1) || (cVar2 = Game_getFlag_318(), cVar2 != '\0')) {
      (**(code **)(*param_1 + 0x15c))(0x22973,0);
    }
    local_4 = 0xffffffff;
    FUN_01385460();
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*param_1 + 0x168))(param_2);
  (**(code **)(*param_1 + 0x90))(param_2);
  bVar1 = Game_getFlag_14d((void *)param_1[0xc]);
  if ((bVar1) && (cVar2 = Game_getFlag_318(), cVar2 == '\0')) {
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*param_1 + 0x15c))(0x22973,0);
  ExceptionList = local_c;
  return;
}

