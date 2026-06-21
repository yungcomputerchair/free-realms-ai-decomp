// addr: 0x014def70
// name: GameCommand_DiscardCard_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandDiscardCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: int GameCommandDiscardCard_execute(void * this) */

int __fastcall GameCommand_DiscardCard_execute(void *this)

{
  int *piVar1;
  uint uVar2;
  int *this_00;
  int *unused_;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 extraout_EAX;
  int *piVar6;
  void *unaff_EDI;
  void **key_;
  void *element;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  void *apvStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [4];
  void *apvStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes GameCommandDiscardCard: validates mGame/mPlayerID, gets the Card by
                       forced id, logs/announces the discard to the player and other players, and
                       optionally performs follow-up state updates. Evidence is the
                       GameCommandDiscardCard.cpp assert path plus discard message strings. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016aef00;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandDiscardCard.cpp",0x40,
                 uVar2);
  }
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPlayerID","..\\common\\networking\\game_command\\GameCommandDiscardCard.cpp",0x41
                 ,uVar2);
  }
  GameCommand_execute(this);
  this_00 = (int *)Game_getOrCreateCardForForcedID
                             (*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 4));
  piStack_64 = this_00;
  (**(code **)(*this_00 + 0xb8))();
  (**(code **)(*this_00 + 0xb4))(*(undefined4 *)((int)this + 0x28));
  element = *(void **)((int)this + 4);
  (**(code **)(**(int **)((int)this + 8) + 0xc4))(element,*(undefined4 *)((int)this + 0x24));
  unused_ = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4));
  if (unused_ == (int *)0x0) {
    FUN_012f5a60("player","..\\common\\networking\\game_command\\GameCommandDiscardCard.cpp",0x49);
  }
  iVar3 = Card_getPropertyMap();
  if (*(uint *)(iVar3 + 0x18) < 0x10) {
    iVar3 = iVar3 + 4;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4);
  }
  Game_logGeneral(*(void **)((int)this + 8),"discarding card: %s",iVar3);
  if (*(int *)((int)this + 0x44) == 0) {
    key_ = apvStack_50;
    (**(code **)(*this_00 + 0x108))();
    uStack_14 = 0;
    GamePlayer_logFormattedMessage(*(void **)((int)this + 8),(int)unused_,"You discard %s.");
    uStack_14 = 0xffffffff;
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_50[0]);
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    apvStack_50[0] = (void *)((uint)apvStack_50[0] & 0xffffff00);
    piStack_60 = (int *)0x0;
    piStack_5c = (int *)0x0;
    uStack_58 = 0;
    uStack_14 = 1;
    FUN_013630f0(&piStack_64);
    piVar1 = piStack_5c;
    if (piStack_5c < piStack_60) {
      FUN_00d83c2d();
    }
    piVar6 = piStack_60;
    if (piStack_5c < piStack_60) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x64) {
        FUN_00d83c2d();
      }
      if (piVar6 == piVar1) break;
      if (&stack0x00000000 == (undefined1 *)0x64) {
        FUN_00d83c2d();
      }
      if (piStack_5c <= piVar6) {
        FUN_00d83c2d();
      }
      if ((void *)*piVar6 != unaff_EDI) {
        (**(code **)(*this_00 + 0x108))(auStack_38);
        uStack_14._0_1_ = 2;
        Game_copyCommandObjectList(unaff_EDI,auStack_54);
        uStack_14._0_1_ = 3;
        if (piStack_5c <= piVar6) {
          FUN_00d83c2d();
        }
        GamePlayer_logFormattedMessage(*(void **)((int)this + 8),*piVar6,"%s discards %s.");
        uStack_14 = CONCAT31(uStack_14._1_3_,2);
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_50[0]);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        apvStack_50[0] = (void *)((uint)apvStack_50[0] & 0xffffff00);
        uStack_14 = CONCAT31(uStack_14._1_3_,1);
        if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_34[0]);
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        apvStack_34[0] = (void *)((uint)apvStack_34[0] & 0xffffff00);
        this_00 = unused_;
      }
      if (piStack_5c <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 1;
    }
  }
  else {
    key_ = apvStack_34;
    (**(code **)(*this_00 + 0x108))();
    uStack_14 = 4;
    GamePlayer_logFormattedMessage(*(void **)((int)this + 8),(int)unused_,"%s: You discard %s.");
    uStack_14 = 0xffffffff;
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_34[0]);
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    apvStack_34[0] = (void *)((uint)apvStack_34[0] & 0xffffff00);
    piStack_60 = (int *)0x0;
    piStack_5c = (int *)0x0;
    uStack_58 = 0;
    uStack_14 = 5;
    FUN_013630f0(&piStack_64);
    piVar1 = piStack_5c;
    if (piStack_5c < piStack_60) {
      FUN_00d83c2d();
    }
    piVar6 = piStack_60;
    if (piStack_5c < piStack_60) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x64) {
        FUN_00d83c2d();
      }
      if (piVar6 == piVar1) break;
      if (&stack0x00000000 == (undefined1 *)0x64) {
        FUN_00d83c2d();
      }
      if (piStack_5c <= piVar6) {
        FUN_00d83c2d();
      }
      if ((void *)*piVar6 != unaff_EDI) {
        (**(code **)(*this_00 + 0x108))(auStack_54);
        uStack_14._0_1_ = 6;
        Game_copyCommandObjectList(unaff_EDI,auStack_38);
        uStack_14._0_1_ = 7;
        if (piStack_5c <= piVar6) {
          FUN_00d83c2d();
        }
        GamePlayer_logFormattedMessage(*(void **)((int)this + 8),*piVar6,"%s: %s discards %s.");
        uStack_14 = CONCAT31(uStack_14._1_3_,6);
        if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_34[0]);
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        apvStack_34[0] = (void *)((uint)apvStack_34[0] & 0xffffff00);
        uStack_14 = CONCAT31(uStack_14._1_3_,5);
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_50[0]);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        apvStack_50[0] = (void *)((uint)apvStack_50[0] & 0xffffff00);
        this_00 = unused_;
      }
      if (piStack_5c <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 1;
    }
  }
  uStack_14 = 0xffffffff;
  if (piStack_60 == (int *)0x0) {
    uStack_58 = 0;
    piStack_5c = (int *)0x0;
    piStack_60 = (int *)0x0;
    uVar4 = (**(code **)(*this_00 + 0x150))();
    if (*(char *)((int)this + 0x4c) != '\0') {
      pvVar5 = Game_getCurrentTurn(*(void **)((int)this + 8));
      pvVar5 = GameTurn_getCurrentStateMachine(pvVar5);
      get_field_1c_if_vector_nonempty(pvVar5);
      EvaluationEnvironment_setPlayElementReturn(this_00,(int)key_,element);
      uVar4 = extraout_EAX;
    }
    ExceptionList = pvStack_1c;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(piStack_60);
}

