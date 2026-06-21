// addr: 0x0150ffe0
// name: CommandObject_ProcessEventEmissionState_testActionPreconditions
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


byte __thiscall
CommandObject_ProcessEventEmissionState_testActionPreconditions
          (int param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  int playerId_;
  uint uVar5;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  char *pcVar6;
  undefined1 auStack_a0 [136];
  void *pvStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Tests action preconditions for the command-object-backed
                       ProcessEventEmissionState variant. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b678b;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff48);
  ExceptionList = &local_c;
  uVar3 = FUN_01321f20();
  uVar3 = PackedActionId_getLow12Bits(uVar3);
  uVar3 = FUN_01321f20(uVar3);
  uVar3 = PackedActionId_getHighBits(uVar3);
  uVar3 = PlayElement_getId(uVar3);
  pcVar6 = "ProcessEventEmissionState::testActionPreconditions(%d, %d - %d)";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar6,uVar3);
  playerId_ = (**(code **)(*param_2 + 0x28))();
  pvVar4 = (void *)StateMachineState_getGame();
  pvVar4 = PlayArea_findPlayerElementById(pvVar4,playerId_);
  Rules_getBooleanKey9DefaultFalse();
  FUN_01383b90();
  EvaluationEnvironment_setBooleanKey9(1);
  EvaluationEnvironment_setBooleanKey4(0);
  EvaluationEnvironment_ctor();
  uStack_4 = 0;
  EvaluationEnvironment_copyFrom(auStack_a0,*(void **)(param_1 + 0xe8),pvVar2);
  EvaluationEnvironment_setBooleanKey9(1);
  EvaluationEnvironment_setBooleanKey4(0);
  FUN_013815b0(pvVar4);
  EvaluationEnvironment_setCurrentTargetFromElement(auStack_a0,(void *)0x0,pvVar2);
  EvaluationEnvironment_setPlayElementId(0);
  FUN_013815b0(pvVar4);
  bVar1 = (**(code **)(*param_2 + 0xdc))(param_3,auStack_a0,1);
  uVar5 = (uint)bVar1;
  EvaluationEnvironment_setBooleanKey9(unaff_EBP);
  EvaluationEnvironment_setBooleanKey4(unaff_ESI);
  pcVar6 = "ProcessEventEmissionState::testActionPreconditions result(%d)";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,pcVar6,uVar5);
  uStack_10 = 0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_18;
  return bVar1;
}

