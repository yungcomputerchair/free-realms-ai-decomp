// addr: 0x014723f0
// name: DoublePassState_actionPlayed
// subsystem: common/common/state
// source (binary assert): common/common/state/DoublePassState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint DoublePassState_actionPlayed(void * this, int playerId_, void *
   playedElement, int actionId_) */

uint __thiscall
DoublePassState_actionPlayed(void *this,int playerId_,void *playedElement,int actionId_)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int extraout_EDX;
  int actionId__00;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  TypeDescriptor *pTVar10;
  char *pcVar11;
  TypeDescriptor *pTVar12;
  undefined4 uVar13;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Handles a DoublePass actionPlayed event, validating the played card/action
                       and hand location, building a state-machine return map, and advancing the
                       state machine; otherwise logs wrong-state/wrong-card errors. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169f2ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x128) == 3) {
    pcVar11 = "DoublePass::actionPlayed";
    pvVar2 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar2,pcVar11,uVar1);
    uVar8 = StateMachineState_getGame(playedElement);
    pvVar2 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if ((pvVar2 != (void *)0x0) &&
       (piVar3 = (int *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                     &Card::RTTI_Type_Descriptor,0), piVar3 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar3 + 0xcc))();
      if ((iVar4 != 0) && (iVar4 = FUN_01321f20(), iVar4 == actionId_)) {
        iVar5 = (**(code **)(*piVar3 + 0x30))();
        iVar4 = playerId_;
        pvVar2 = (void *)StateMachineState_getGame();
        pvVar2 = PlayArea_findPlayerElementById(pvVar2,iVar4);
        PlayElement_getGame();
        iVar4 = FUN_0139d7c0();
        if (iVar5 != iVar4) {
          pcVar11 = "You may only play cards out of hand.";
          pvVar6 = (void *)StateMachineState_getGame();
          GamePlayer_logFormattedMessage(pvVar6,(int)pvVar2,pcVar11);
          goto LAB_01472437;
        }
      }
      *(int *)((int)this + 0xe0) = playerId_;
      pvVar2 = Mem_Alloc(0x18);
      uVar7 = 0;
      uStack_4 = 0;
      if (pvVar2 != (void *)0x0) {
        uVar7 = ReturnValueMap_ctor();
      }
      uStack_4 = 0xffffffff;
      ReturnValueMap_setInteger(4,playerId_);
      ReturnValueMap_setInteger(3,playedElement);
      ReturnValueMap_setInteger(5,actionId_);
      set_value_boolean(0x1d,true);
      StateMachine_pushPendingState(uVar7);
      uVar7 = (**(code **)(**(int **)((int)this + 8) + 0x4c))();
      uVar8 = StateMachineState_getGame();
      iVar4 = (int)((ulonglong)uVar8 >> 0x20);
      pvVar2 = (void *)uVar8;
      if (pvVar2 == (void *)0x0) {
        FUN_012f5a60(&DAT_018e78cc,"..\\common\\common\\state\\DoublePassState.cpp",0xbc);
        iVar4 = extraout_EDX;
      }
      uVar13 = 0;
      pTVar12 = &Card::RTTI_Type_Descriptor;
      pTVar10 = &PlayElement::RTTI_Type_Descriptor;
      uVar9 = 0;
      pvVar6 = find_play_element_in_maps(pvVar2,iVar4);
      pvVar6 = (void *)FUN_00d8d382(pvVar6,uVar9,pTVar10,pTVar12,uVar13);
      if (pvVar6 == (void *)0x0) {
        FUN_012f5a60("originCard","..\\common\\common\\state\\DoublePassState.cpp",0xbe);
      }
      set_play_element_id_field(*(void **)((int)this + 0xe8),pvVar6);
      pvVar2 = PlayArea_findPlayerElementById(pvVar2,playerId_);
      if (pvVar2 == (void *)0x0) {
        FUN_012f5a60("player","..\\common\\common\\state\\DoublePassState.cpp",0xc1);
      }
      FUN_013815b0(pvVar2);
      pvVar2 = Card_getActionByID(pvVar6,actionId__00);
      if (pvVar2 == (void *)0x0) {
        FUN_012f5a60("currentAction","..\\common\\common\\state\\DoublePassState.cpp",0xc5);
      }
      EvaluationEnvironment_setActionReturn(pvVar2);
      uVar1 = StateMachine_setCurrentState(uVar7);
      ExceptionList = local_c;
      return uVar1;
    }
  }
  else {
    pcVar11 = "Player actionPlayed in wrong state! playerid: %d";
    pvVar2 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar2,pcVar11,playerId_);
  }
LAB_01472437:
  (**(code **)(*(int *)this + 0x88))();
  ExceptionList = local_c;
  return 0;
}

