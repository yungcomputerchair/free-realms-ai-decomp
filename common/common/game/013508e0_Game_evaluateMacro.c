// addr: 0x013508e0
// name: Game_evaluateMacro
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_evaluateMacro(void * this, void * macroValue, void * outValue, void
   * environment) */

bool __thiscall Game_evaluateMacro(void *this,void *macroValue,void *outValue,void *environment)

{
  undefined1 uVar1;
  void *sourceEnv;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Evaluates an integer macro id by locating its rule-set entry and executing it
                       in a prepared evaluation environment. Logs and returns false if the rule id
                       cannot be found. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167d4a6;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff44);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"EvaluateMacro",sourceEnv);
  if (*(int *)((int)macroValue + 4) != 2) {
    FUN_012f5a60("macroValue->isIntegerValue()","..\\common\\common\\game\\Game.cpp",0x1e5e);
  }
  if (*(int *)((int)macroValue + 4) != 2) {
    FUN_012f5a60("mTypeID == kIntegerTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x129);
    if (*(int *)((int)macroValue + 4) != 2) {
      uVar4 = 0;
      goto LAB_01350976;
    }
  }
  uVar4 = *(undefined4 *)((int)macroValue + 8);
LAB_01350976:
  uVar6 = *(undefined4 *)((int)this + 0x20);
  uVar5 = uVar4;
  FUN_012a0710(uVar4,uVar6);
  piVar2 = (int *)RuleSetDB_getRuleSet(uVar5,uVar6);
  FUN_012fa910();
  iStack_4 = 0;
  EvaluationEnvironment_ctor();
  iStack_4._0_1_ = 1;
  EvaluationEnvironment_copyFrom(auStack_a0,environment,sourceEnv);
  iVar3 = PlayElement_getId();
  set_integer_value_for_key(0x39,iVar3);
  iVar3 = FUN_01383460(0x39);
  set_integer_value_for_key(0x3a,iVar3);
  FUN_01381350(0);
  if (piVar2 == (int *)0x0) {
    Game_logGeneral(this,"couldn\'t get rID: %d in evaluate Macro",uVar4);
    WAErrorLog_write("coudln\'t get rID: %d in evaluate Macro");
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_01385460();
    iStack_4 = 0xffffffff;
    FUN_01300cd0();
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*piVar2 + 0x38))(auStack_ac,auStack_a0);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_01385460();
    iStack_4 = 0xffffffff;
    FUN_01300cd0();
  }
  ExceptionList = local_c;
  return (bool)uVar1;
}

