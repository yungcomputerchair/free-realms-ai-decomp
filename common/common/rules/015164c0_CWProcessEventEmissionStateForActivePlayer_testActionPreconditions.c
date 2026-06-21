// addr: 0x015164c0
// name: CWProcessEventEmissionStateForActivePlayer_testActionPreconditions
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


byte __thiscall
CWProcessEventEmissionStateForActivePlayer_testActionPreconditions
          (int param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  int playerId_;
  void *this;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  char *pcVar7;
  uint uStack_a4;
  undefined1 auStack_a0 [128];
  void *pvStack_20;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Tests action preconditions for the active-player process event emission
                       state. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b762b;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff44);
  ExceptionList = &local_c;
  uVar3 = FUN_01321f20();
  uVar3 = PackedActionId_getLow12Bits(uVar3);
  uVar3 = FUN_01321f20(uVar3);
  uVar3 = PackedActionId_getHighBits(uVar3);
  uVar3 = PlayElement_getId(uVar3);
  pcVar7 = "CWProcessEventEmissionStateForActivePlayer::testActionPreconitions(%d, %d - %d)";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar7,uVar3);
  playerId_ = (**(code **)(*param_2 + 0x28))();
  EvaluationEnvironment_tracef(*(void **)(param_1 + 0xe8),"using playerid: %d",playerId_);
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
  this = (void *)StateMachineState_getCurrentTurn();
  uStack_a4 = get_field_8(this);
  piVar5 = (int *)StateMachineState_getCurrentTurn();
  (**(code **)(*piVar5 + 0x48))(pvVar4);
  bVar1 = (**(code **)(*param_2 + 0xdc))(param_3,&uStack_a4,1);
  uVar6 = (uint)bVar1;
  piVar5 = (int *)StateMachineState_getCurrentTurn();
  (**(code **)(*piVar5 + 0x48))(unaff_EBP);
  EvaluationEnvironment_setBooleanKey9(pvVar2);
  EvaluationEnvironment_setBooleanKey4(unaff_EDI);
  pcVar7 = "ZPProcessEventEmissionState::testActionPreconitions result(%d)";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,pcVar7,uVar6);
  uStack_18 = 0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_20;
  return bVar1;
}

