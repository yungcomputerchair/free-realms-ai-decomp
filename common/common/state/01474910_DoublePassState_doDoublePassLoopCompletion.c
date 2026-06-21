// addr: 0x01474910
// name: DoublePassState_doDoublePassLoopCompletion
// subsystem: common/common/property
// source (binary assert): common/common/state/DoublePassState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint DoublePassState_doDoublePassLoopCompletion(void * this, bool
   hadRestorePlays_) */

uint __thiscall DoublePassState_doDoublePassLoopCompletion(void *this,bool hadRestorePlays_)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  bool *pbVar6;
  void *this_00;
  int iVar7;
  uint uVar8;
  int *unaff_retaddr;
  undefined3 in_stack_00000005;
  char *pcVar9;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Handles DOUBLEPASS loop completion, including restore-state bookkeeping,
                       target player updates, and completion strategy dispatch. Evidence: log string
                       DOUBLEPASS::DODOUBLEPASSLOOPCOMPLETION plus DoublePassState.cpp asserts on
                       mCurrentPlayer and unhandled loop completion strategy. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169f573;
  local_c = ExceptionList;
  piVar1 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  pcVar9 = "DOUBLEPASS::DODOUBLEPASSLOOPCOMPLETION";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,pcVar9,piVar1);
  if (*(int *)((int)this + 0x108) == 0) {
    FUN_012f5a60("mCurrentPlayer","..\\common\\common\\state\\DoublePassState.cpp",0x2eb);
  }
  if (hadRestorePlays_ != false) {
    uVar3 = GamePlayer_getPlayerId();
    pcVar9 = "Player %d has plays in doublepass restore state\n";
    pvVar2 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar2,pcVar9,uVar3);
  }
  if (*(char *)((int)this + 0x11c) != '\0') {
    if ((hadRestorePlays_ == true) && (*(int *)((int)this + 0x120) == 3)) {
      pvVar2 = (void *)StateMachineState_getGame();
      pvVar2 = Game_getCurrentTurn(pvVar2);
      uVar4 = get_field_8(pvVar2);
      if (*(uint *)((int)this + 0x108) == uVar4) {
        pvVar2 = (void *)StateMachineState_getGame();
        piVar5 = Game_getCurrentTurn(pvVar2);
        (**(code **)(*piVar5 + 0x48))(0);
      }
    }
    if ((*(char *)((int)this + 0x11c) != '\0') && (hadRestorePlays_ == false)) {
      _hadRestorePlays_ = GamePlayer_getPlayerId();
      pbVar6 = IntToBoolMap_getOrInsert((void *)((int)this + 0xf8),&hadRestorePlays_,piVar1);
      *pbVar6 = true;
      pvVar2 = (void *)StateMachineState_getGame();
      pvVar2 = Game_getCurrentTurn(pvVar2);
      uVar4 = get_field_8(pvVar2);
      if (uVar4 == 0) {
        piVar1 = (int *)StateMachineState_getCurrentTurn();
        (**(code **)(*piVar1 + 0x48))(*(undefined4 *)((int)this + 0x108));
      }
      uVar4 = (**(code **)(*(int *)this + 0x130))
                        (*(undefined1 *)((int)this + 0x11c),*(undefined4 *)((int)this + 0x120));
      ExceptionList = pvStack_14;
      return uVar4;
    }
  }
  _hadRestorePlays_ = StateMachineState_getCurrentTurn();
  pvVar2 = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x71);
  StateMachineState_getGame();
  iVar7 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(this_00,iVar7);
  uStack_18 = 0;
  pvStack_14 = (void *)0x0;
  uStack_10 = 0;
  uStack_4 = 1;
  DisplayActionBuilder_addObjectArg(this_00,auStack_1c);
  DisplayActionBuilder_addIntArg(this_00,1);
  piVar1 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar1 + 0x154))(this_00);
  iVar7 = *(int *)((int)this + 0x120);
  if ((iVar7 == 1) || (iVar7 == 2)) {
    *(undefined4 *)((int)this + 0x128) = 3;
    piVar1 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar1 + 0x174))(*(undefined4 *)((int)this + 0x108));
    (**(code **)(*(int *)this + 0x88))();
    local_c = (void *)0xffffffff;
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    uVar4 = 2;
  }
  else if (iVar7 == 3) {
    uVar4 = *(uint *)((int)this + 0x108);
    pvVar2 = (void *)StateMachineState_getGame();
    pvVar2 = Game_getCurrentTurn(pvVar2);
    uVar8 = get_field_8(pvVar2);
    if (uVar4 == uVar8) {
      uVar4 = (**(code **)(*(int *)this + 0x130))
                        (*(undefined1 *)((int)this + 0x11c),*(undefined4 *)((int)this + 0x120));
      local_c = (void *)0xffffffff;
      StdVector_clearStorage(&stack0xffffffdc);
    }
    else {
      *(undefined4 *)((int)this + 0x128) = 3;
      (**(code **)(*unaff_retaddr + 0x48))(uVar4);
      piVar1 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar1 + 0x174))(*(undefined4 *)((int)this + 0x108));
      (**(code **)(*(int *)this + 0x88))();
      local_c = (void *)0xffffffff;
      StdVector_clearStorage(&stack0xffffffdc);
      uVar4 = 2;
    }
  }
  else {
    FUN_012f5a60("!\"unhandled double pass loop completion strategy\"",
                 "..\\common\\common\\state\\DoublePassState.cpp",0x38f);
    local_c = (void *)0xffffffff;
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    uVar4 = 0;
  }
  ExceptionList = pvStack_14;
  return uVar4;
}

