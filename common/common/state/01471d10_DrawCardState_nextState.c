// addr: 0x01471d10
// name: DrawCardState_nextState
// subsystem: common/common/game
// source (binary assert): common/common/state/DrawCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DrawCardState_nextState(void * this) */

int __fastcall DrawCardState_nextState(void *this)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  void *this_00;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  char *pcVar15;
  int iVar16;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *name;
  void *pvStack_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  void *pvStack_3c;
  undefined4 uStack_38;
  void *pvStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [4];
  void *pvStack_24;
  void *pvStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Implements DrawCardState::nextState: transitions through
                       get-cards/draw-card/done substates, fetches player/play area, draws cards,
                       logs draw counts/null cards, updates no-draw flags, emits draw messages, and
                       returns next-state status. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169f283;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_c;
  pcVar15 = "DrawCardState::nextState";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar15,uVar3);
  iVar11 = *(int *)((int)this + 0x108);
  if (iVar11 == 1) {
    pcVar15 = "DrawCardState::kGetCardsDrawCardState";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar15,uVar3);
    iVar16 = 0;
    set_integer_value_for_key(0x32,0);
    iVar11 = *(int *)((int)this + 0xf8);
    *(undefined4 *)((int)this + 0x108) = 2;
    pvVar4 = (void *)StateMachineState_getGame();
    pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar11);
    if (pvVar4 == (void *)0x0) {
      uVar12 = *(undefined4 *)((int)this + 0xf8);
      pcVar15 = "Couldn\'t get Player %d in DrawCard!";
    }
    else {
      piVar10 = (int *)PlayElement_getGame();
      uVar12 = (**(code **)(*piVar10 + 0x48))
                         (*(undefined4 *)((int)this + 0x104),*(undefined4 *)((int)this + 0xe8),0,
                          &PlayArea::RTTI_Type_Descriptor,&PilePlayArea::RTTI_Type_Descriptor,0);
      piVar10 = (int *)FUN_00d8d382(uVar12);
      if (piVar10 != (int *)0x0) {
        pvVar4 = (void *)StateMachineState_getGame();
        bVar2 = Game_getFlag_14d(pvVar4);
        if (!bVar2) {
          ExceptionList = local_c;
          return 2;
        }
        *(undefined1 *)((int)this + 0x11c) = 0;
        piVar5 = (int *)StateMachineState_getCurrentTurn();
        uVar6 = (**(code **)(*piVar5 + 0x44))
                          (*(undefined4 *)((int)this + 0x100),*(undefined4 *)((int)this + 0xf8));
        pvStack_3c = (void *)0x0;
        uStack_38 = 0;
        pvStack_34 = (void *)0x0;
        local_c = (void *)0x0;
        (**(code **)(*piVar10 + 0x34))(auStack_40);
        if ((int)uVar6 < (int)*(uint *)((int)this + 0x100)) {
          *(undefined1 *)((int)this + 0x11c) = 1;
          if (pvStack_34 == (void *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = iStack_30 - (int)pvStack_34 >> 2;
          }
          if ((uVar7 < *(uint *)((int)this + 0x100)) &&
             ((pvStack_34 == (void *)0x0 || ((uint)(iStack_30 - (int)pvStack_34 >> 2) <= uVar6)))) {
            *(undefined1 *)((int)this + 0x11c) = 0;
          }
        }
        FUN_01300db0();
        uVar12 = *(undefined4 *)((int)this + 0x100);
        pcVar15 = "Drawcards: %d, %d, %d";
        pvVar4 = (void *)StateMachineState_getGame
                                   ("Drawcards: %d, %d, %d",uVar12,uVar6,
                                    *(undefined4 *)((int)this + 0xf8));
        Game_logGeneral(pvVar4,pcVar15,uVar12);
        if (pvStack_34 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = iStack_30 - (int)pvStack_34 >> 2;
        }
        if (uVar7 < uVar6) {
          if (pvStack_34 == (void *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = iStack_30 - (int)pvStack_34 >> 2;
          }
        }
        if (0 < (int)uVar6) {
          do {
            piVar10 = (int *)FUN_0139e700(iVar16);
            iVar11 = *piVar10;
            if (iVar11 == 0) {
              FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\state\\DrawCardState.cpp",0x9a);
            }
            piVar10 = (int *)StateMachineState_getGame();
            (**(code **)(*piVar10 + 0x104))(*(undefined4 *)((int)this + 0xf8),iVar11);
            pvStack_48 = (void *)PlayElement_getId();
            FUN_01300680(6);
            FUN_0042c155(&pvStack_48);
            iVar16 = iVar16 + 1;
          } while (iVar16 < (int)uVar6);
        }
        FUN_012fa910();
        iStack_4._0_1_ = 1;
        iVar11 = *(int *)((int)this + 0x100);
        pvStack_48 = (void *)0x0;
        FUN_01300680(0xd);
        piVar10 = IntDefaultMap_getOrInsert(pvStack_3c,(int *)&pvStack_48);
        *piVar10 = iVar11;
        bVar1 = *(byte *)((int)this + 0x11c);
        pvStack_48 = (void *)0x1;
        FUN_01300680(0xd);
        puVar8 = (uint *)IntDefaultMap_getOrInsert(pvStack_3c,(int *)&pvStack_48);
        *puVar8 = (uint)bVar1;
        pvStack_48 = Mem_Alloc(0x38);
        iStack_4._0_1_ = 2;
        if (pvStack_48 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          uVar12 = StateMachineState_getGame();
          pvVar4 = (void *)FUN_0141a550(uVar12);
        }
        iStack_4._0_1_ = 1;
        set_field_4(pvVar4,*(uint *)((int)this + 0xf8));
        FUN_0141a630(auStack_44);
        FUN_0141a6e0((int)this + 0x10c);
        this_00 = (void *)StateMachineState_getGame();
        Game_dispatchCommandToAllPlayers(this_00,pvVar4);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_01300cd0();
        iStack_4 = 0xffffffff;
        if (pvStack_34 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_34);
        }
        pvStack_34 = (void *)0x0;
        iStack_30 = 0;
        uStack_2c = 0;
        goto LAB_014720c5;
      }
      uVar12 = *(undefined4 *)((int)this + 0x104);
      pcVar15 = "Couldn\'t get Play Area %d in DrawCard!";
    }
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar15,uVar12);
  }
  else {
    if (iVar11 == 2) {
LAB_014720c5:
      pcVar15 = "DrawCardState::kDrawCardDrawCardState";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar15,uVar3);
      FUN_01300db0();
      if ((*(int *)((int)this + 0x110) == 6) ||
         (FUN_012f5a60("mTypeID == kIntegerListTypeID",
                       "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                       ,0x135), *(int *)((int)this + 0x110) == 6)) {
        iVar11 = *(int *)((int)this + 0x114);
      }
      else {
        iVar11 = 0;
      }
      bVar2 = false;
      if (*(int *)(iVar11 + 4) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(iVar11 + 8) - *(int *)(iVar11 + 4) >> 2;
      }
      if (*(uint *)((int)this + 0x118) < uVar3) {
        puVar9 = (undefined4 *)FUN_01260d40(*(uint *)((int)this + 0x118));
        uVar12 = *puVar9;
        pcVar15 = "drawing card: %d";
        uVar13 = uVar12;
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar15,uVar13);
        uVar14 = StateMachineState_getGame
                           (uVar12,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,
                            0);
        pvVar4 = find_play_element_in_maps((void *)uVar14,(int)((ulonglong)uVar14 >> 0x20));
        piVar10 = (int *)FUN_00d8d382(pvVar4);
        if (piVar10 == (int *)0x0) {
          pcVar15 = "Got Null card in draw! %d";
          pvVar4 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar4,pcVar15,uVar12);
        }
        else {
          iVar11 = *(int *)((int)this + 0xf8);
          pvVar4 = (void *)StateMachineState_getGame();
          PlayArea_findPlayerElementById(pvVar4,iVar11);
          iVar11 = *piVar10;
          PlayElement_getGame();
          uVar12 = FUN_0139d7c0();
          (**(code **)(iVar11 + 0x128))(uVar12);
          FUN_01387470(piVar10);
          iVar11 = *(int *)((int)this + 0xf8);
          iVar16 = 1;
          bVar2 = true;
          pvVar4 = (void *)StateMachineState_getCurrentTurn();
          GameTurn_addStateCounter(pvVar4,iVar11,iVar16);
        }
      }
      *(int *)((int)this + 0x118) = *(int *)((int)this + 0x118) + 1;
      if (*(int *)((int)this + 0x100) <= *(int *)((int)this + 0x118)) {
        *(undefined4 *)((int)this + 0x108) = 3;
      }
      if (!bVar2) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_28,"skipnodrawmsgs")
        ;
        iStack_4 = 3;
        name = abStack_28;
        pvVar4 = (void *)StateMachineState_getGame();
        iVar11 = Game_findNamedEntryValue(pvVar4,name);
        iStack_4 = 0xffffffff;
        if (uStack_10 < 0x10) {
          uStack_10 = 0xf;
          pvStack_14 = (void *)0x0;
          pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
          if (iVar11 != 1) {
            iVar11 = *(int *)this;
            uVar12 = (**(code **)(iVar11 + 0x128))(*(undefined1 *)((int)this + 0x11c));
            (**(code **)(iVar11 + 300))(uVar12);
          }
          uVar12 = (**(code **)(**(int **)((int)this + 8) + 0x44))();
          uVar13 = (**(code **)(*(int *)this + 0x128))(*(undefined1 *)((int)this + 0x11c));
          FUN_014643a0(uVar13);
          iVar11 = *(int *)((int)this + 0xf8);
          pvVar4 = (void *)StateMachineState_getGame();
          pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar11);
          FUN_013871f0(pvVar4);
          uVar13 = (**(code **)(*(int *)this + 0x128))(*(undefined1 *)((int)this + 0x11c));
          EvaluationEnvironment_setReturnKey8Integer(uVar13);
          iVar11 = StateMachine_setCurrentState(uVar12);
          ExceptionList = pvStack_14;
          return iVar11;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvStack_24);
      }
      iVar11 = *(int *)((int)this + 0xf8);
      *(int *)((int)this + 0x120) = *(int *)((int)this + 0x120) + 1;
      pvVar4 = (void *)StateMachineState_getGame();
      pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar11);
      iVar11 = FUN_01383460(0x32);
      set_integer_value_for_key(0x32,iVar11 + 1);
      uVar12 = (**(code **)(**(int **)((int)this + 8) + 0x44))();
      FUN_014643a0(0x11);
      EvaluationEnvironment_setReturnKey8Integer(0x11);
      FUN_013871f0(pvVar4);
      iVar11 = StateMachine_setCurrentState(uVar12);
      ExceptionList = local_c;
      return iVar11;
    }
    if (iVar11 == 3) {
      pcVar15 = "DrawCardState::kDoneDrawCardState";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar15,uVar3);
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 1;
}

