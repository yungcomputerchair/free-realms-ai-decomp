// addr: 0x0145aec0
// name: WhileState_sendCloseReveal
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall WhileState_sendCloseReveal(int param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  void *this;
  char *pcVar7;
  int value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string 'Target not Gotten,
                       setting reveal to not send button pressed.'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ca5b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  pcVar7 = "WhileState::sendCloseReveal";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,pcVar7,uVar2);
  piVar1 = *(int **)(param_1 + 0x134);
  if (piVar1 < *(int **)(param_1 + 0x130)) {
    FUN_00d83c2d();
  }
  piVar6 = *(int **)(param_1 + 0x130);
  if (*(int **)(param_1 + 0x134) < piVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == -300) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar1) break;
    if (param_1 == -300) {
      FUN_00d83c2d();
    }
    if (*(int **)(param_1 + 0x134) <= piVar6) {
      FUN_00d83c2d();
    }
    value_ = *piVar6;
    pcVar7 = "Sending close reveal for reveal ID: %d";
    iVar4 = value_;
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar7,iVar4);
    pvVar3 = Mem_Alloc(0x14);
    this = (void *)0x0;
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      this = (void *)FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    StateMachineState_getGame();
    iVar4 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(this,iVar4);
    DisplayActionBuilder_addIntArg(this,value_);
    if (param_2 == '\0') {
      pcVar7 = "Target not Gotten, setting reveal to not send button pressed.";
      pvVar3 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar3,pcVar7,uVar2);
      FUN_012f8c70(0x77);
      DisplayActionBuilder_addBoolArg(this,false);
    }
    else {
      pcVar7 = "Target Gotten, closing reveal.";
      pvVar3 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar3,pcVar7,uVar2);
      FUN_012f8c70(0x6d);
    }
    piVar5 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar5 + 0x150))(0,this);
    StateMachineState_getGame(value_);
    FUN_01360e80(value_);
    if (*(int **)(param_1 + 0x134) <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  }
  ExceptionList = local_c;
  return 1;
}

