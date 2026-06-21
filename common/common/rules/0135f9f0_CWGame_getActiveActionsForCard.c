// addr: 0x0135f9f0
// name: CWGame_getActiveActionsForCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall CWGame_getActiveActionsForCard(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *element;
  undefined1 auStack_bc [3];
  undefined1 uStack_b9;
  undefined4 uStack_b8;
  void *pvStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Evaluates active actions for a card in an environment and pushes accepted
                       results. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167ea36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x3c))(DAT_01b839d8 ^ (uint)&stack0xffffff34);
  uVar3 = FUN_013f7eb0();
  EvaluationEnvironment_ctor();
  uStack_4 = 0;
  piVar4 = PlayArea_findPlayerElementById(param_1,param_2);
  if (piVar4 == (int *)0x0) {
    uStack_4 = 0xffffffff;
    FUN_01385460();
    uStack_b9 = 0;
  }
  else {
    element = auStack_a0;
    (**(code **)(*piVar4 + 0x84))();
    uVar1 = Rules_getBooleanKey9DefaultFalse();
    uStack_a8 = CONCAT31(uStack_a8._1_3_,uVar1);
    uVar1 = FUN_01383b90();
    uStack_ac = CONCAT31(uStack_ac._1_3_,uVar1);
    EvaluationEnvironment_setBooleanKey9(1);
    EvaluationEnvironment_setBooleanKey4(0);
    EvaluationEnvironment_setCurrentTargetFromElement(&uStack_a4,(void *)0x0,element);
    EvaluationEnvironment_setPlayElementId(0);
    uStack_b8 = 0;
    pvStack_b4 = (void *)0x0;
    uStack_b0 = 0;
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    (**(code **)(*param_1 + 0x144))(auStack_bc);
    uStack_b9 = Card_getActiveActionsForTarget(param_2,uVar2,uVar3,param_3,&uStack_b8,param_1,0);
    EvaluationEnvironment_setBooleanKey9(uStack_a4);
    EvaluationEnvironment_setBooleanKey4(uStack_a8);
    uStack_4 = uStack_4 & 0xffffff00;
    if (pvStack_b4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_b4);
    }
    pvStack_b4 = (void *)0x0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_4 = 0xffffffff;
    FUN_01385460();
  }
  ExceptionList = local_c;
  return uStack_b9;
}

