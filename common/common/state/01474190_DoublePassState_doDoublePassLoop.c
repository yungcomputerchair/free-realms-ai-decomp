// addr: 0x01474190
// name: DoublePassState_doDoublePassLoop
// subsystem: common/common/game
// source (binary assert): common/common/state/DoublePassState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DoublePassState_doDoublePassLoop(void * this, bool prePass_, int
   passMode_) */

int __thiscall DoublePassState_doDoublePassLoop(void *this,bool prePass_,int passMode_)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  bool *pbVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint value_;
  void *pvVar10;
  int *piVar11;
  undefined4 unaff_ESI;
  undefined8 uVar12;
  char *pcVar13;
  undefined4 uStack_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Runs the DoublePassState double-pass loop: chooses the next current player
                       with playable actions, tracks has-plays flags, emits pass/has-plays messages,
                       and returns/advances state. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169f50b;
  local_c = ExceptionList;
  piVar3 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  ExceptionList = &local_c;
  pcVar13 = "DOUBLEPASS::DODOUBLEPASSLOOP";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar13,piVar3);
  *(bool *)((int)this + 0x11c) = prePass_;
  *(int *)((int)this + 0x120) = passMode_;
  *(undefined4 *)((int)this + 0x108) = 0;
  piVar8 = *(int **)((int)this + 0x114);
  local_10 = piVar8;
  if (piVar8 < *(int **)((int)this + 0x110)) {
    FUN_00d83c2d();
  }
  piVar11 = *(int **)((int)this + 0x110);
  if (*(int **)((int)this + 0x114) < piVar11) {
    FUN_00d83c2d();
  }
  do {
    if (this == (void *)0xfffffef4) {
      FUN_00d83c2d();
    }
    if (piVar11 == piVar8) goto LAB_014742d2;
    if (this == (void *)0xfffffef4) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x114) <= piVar11) {
      FUN_00d83c2d();
    }
    iVar9 = *piVar11;
    if (iVar9 == 0) {
      FUN_012f5a60("player","..\\common\\common\\state\\DoublePassState.cpp",0x222);
    }
    if ((passMode_ != 3) || (iVar5 = StateMachineState_getActivePlayer(), iVar9 != iVar5)) {
      uStack_14 = GamePlayer_getPlayerId();
      pbVar6 = IntToBoolMap_getOrInsert((void *)((int)this + 0xf8),&uStack_14,piVar3);
      if (*pbVar6 == false) {
        iVar5 = *(int *)this;
        uVar7 = GamePlayer_getPlayerId();
        cVar1 = (**(code **)(iVar5 + 0x144))(uVar7);
        if (cVar1 == '\0') {
          *(int *)((int)this + 0x108) = iVar9;
LAB_014742d2:
          if (*(int *)((int)this + 0x108) == 0) {
            StateMachineState_getActivePlayer();
            local_10 = (int *)GamePlayer_getPlayerId();
            pbVar6 = IntToBoolMap_getOrInsert((void *)((int)this + 0xf8),&local_10,piVar3);
            if ((*pbVar6 == false) && (passMode_ == 3)) {
              uVar7 = StateMachineState_getActivePlayer();
              *(undefined4 *)((int)this + 0x108) = uVar7;
            }
          }
          if (*(int *)((int)this + 0x108) != 0) {
            iVar9 = *(int *)this;
            uVar7 = GamePlayer_getPlayerId();
            cVar1 = (**(code **)(iVar9 + 0x144))(uVar7);
            if (cVar1 == '\0') {
              if ((passMode_ == 2) || ((prePass_ && (passMode_ != 3)))) {
                piVar8 = (int *)StateMachineState_getCurrentTurn();
                (**(code **)(*piVar8 + 0x48))(*(undefined4 *)((int)this + 0x108));
              }
              pvVar4 = (void *)StateMachineState_getGame();
              bVar2 = Game_getFlag_14d(pvVar4);
              if ((!bVar2) &&
                 (iVar9 = StateMachineState_getGame(), *(char *)(iVar9 + 0x362) == '\0')) {
                *(undefined4 *)((int)this + 0x128) = 2;
                ExceptionList = local_c;
                return 2;
              }
              pvVar4 = (void *)StateMachineState_getCurrentTurn();
              piVar8 = (int *)get_field_8(pvVar4);
              piVar3 = (int *)StateMachineState_getCurrentTurn();
              (**(code **)(*piVar3 + 0x48))(*(undefined4 *)((int)this + 0x108));
              piVar3 = (int *)StateMachineState_getGame();
              cVar1 = (**(code **)(*piVar3 + 0x174))(*(undefined4 *)((int)this + 0x108));
              iStack_4 = CONCAT31(iStack_4._1_3_,cVar1);
              piVar3 = (int *)StateMachineState_getCurrentTurn();
              (**(code **)(*piVar3 + 0x48))();
              if (cVar1 == '\0') {
                cVar1 = DoublePassState_shouldAutoSkip(this);
                puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,cVar1);
              }
              if (cVar1 == '\x01') {
                uVar7 = GamePlayer_getPlayerId();
                uVar12 = StateMachineState_getGame(uVar7);
                iVar9 = RefCountMap_getCountForKey((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
                if (0 < iVar9) {
                  uVar7 = GamePlayer_getPlayerId();
                  uVar12 = StateMachineState_getGame(uVar7);
                  RefCountMap_releaseKey((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
                  cVar1 = '\0';
                  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
                  uVar7 = GamePlayer_getPlayerId();
                  pcVar13 = "Pre-pass for player %d, marking has-plays as false.";
                  pvVar4 = (void *)StateMachineState_getGame();
                  Game_logGeneral(pvVar4,pcVar13,uVar7);
                }
              }
              pvVar4 = Mem_Alloc(0x38);
              local_10 = (int *)0x0;
              if (pvVar4 == (void *)0x0) {
                pvVar4 = (void *)0x0;
              }
              else {
                uVar7 = StateMachineState_getGame();
                pvVar4 = (void *)FUN_0141a550(uVar7);
              }
              local_10 = (int *)0xffffffff;
              if (*(int *)((int)this + 0x108) == 0) {
                FUN_012f5a60("mCurrentPlayer","..\\common\\common\\state\\DoublePassState.cpp",0x288
                            );
              }
              value_ = GamePlayer_getPlayerId();
              set_field_4(pvVar4,value_);
              uVar7 = GamePlayer_getPlayerId();
              if (cVar1 == '\0') {
                pcVar13 = "Player %d doesn\'t have plays";
                pvVar10 = (void *)StateMachineState_getGame();
                Game_logGeneral(pvVar10,pcVar13,uVar7);
              }
              else {
                pcVar13 = "Player %d has plays";
                pvVar10 = (void *)StateMachineState_getGame();
                Game_logGeneral(pvVar10,pcVar13,uVar7);
              }
              CommandObject_setFirstIntArg(pvVar4,(uint)(cVar1 != '\0'));
              piVar3 = (int *)StateMachineState_getCurrentTurn();
              iVar9 = (**(code **)(*piVar3 + 0x3c))();
              CommandObject_setSecondIntArg(pvVar4,iVar9);
              pvVar10 = (void *)StateMachineState_getGame();
              Game_dispatchCommandToAllPlayers(pvVar10,pvVar4);
              if ((char)((uint)unaff_ESI >> 0x18) != '\0') {
                StateMachineState_getActivePlayer();
                GamePlayer_getPlayerId();
                pbVar6 = IntToBoolMap_getOrInsert
                                   ((void *)((int)this + 0xf8),&stack0xffffffe4,piVar8);
                if ((*pbVar6 == false) && (iStack_4 == 3)) {
                  piVar8 = (int *)StateMachineState_getCurrentTurn();
                  (**(code **)(*piVar8 + 0x48))(0);
                }
              }
              iVar9 = (**(code **)(*(int *)this + 0x134))(puStack_8);
              ExceptionList = local_c;
              return iVar9;
            }
          }
          iVar9 = (**(code **)(*(int *)this + 0x138))();
          ExceptionList = local_c;
          return iVar9;
        }
      }
    }
    if (*(int **)((int)this + 0x114) <= piVar11) {
      FUN_00d83c2d();
    }
    piVar11 = piVar11 + 1;
    piVar8 = local_10;
  } while( true );
}

