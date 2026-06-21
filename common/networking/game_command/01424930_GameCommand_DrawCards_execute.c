// addr: 0x01424930
// name: GameCommand_DrawCards_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandDrawCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommandDrawCards_execute(void * this) */

int __fastcall GameCommand_DrawCards_execute(void *this)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int elementId_;
  int *piVar7;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes GameCommandDrawCards by validating game/player, iterating card ids
                       in the command, resolving each Card, and notifying the owning player UI/hand
                       state for matching cards. Evidence is the GameCommandDrawCards.cpp assert
                       path and card iteration behavior. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01694edb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff48;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandDrawCards.cpp",0x2a,uVar1
                );
  }
  GameCommand_execute(this);
  pvVar2 = find_play_element_in_maps(*(void **)((int)this + 8),elementId_);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_012f5a60("mPlayerID","..\\common\\networking\\game_command\\GameCommandDrawCards.cpp",0x30
                   ,uVar1);
    }
    piVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4));
    PlayElement_getGame();
    uVar4 = FUN_0139d7c0();
    piVar7 = *(int **)((int)this + 0x3c);
    if (*(int **)((int)this + 0x40) < piVar7) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar5 = *(int **)((int)this + 0x40);
      if (piVar5 < *(int **)((int)this + 0x3c)) {
        FUN_00d83c2d();
      }
      if (this == (void *)0xffffffc8) {
        FUN_00d83c2d();
      }
      if (piVar7 == piVar5) {
        uVar4 = (**(code **)(**(int **)((int)this + 8) + 0x174))(piVar3);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      if (this == (void *)0xffffffc8) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)this + 0x40) <= piVar7) {
        FUN_00d83c2d();
      }
      pvVar2 = find_play_element_in_maps(*(void **)((int)this + 8),*piVar7);
      piVar5 = (int *)FUN_00d8d382(pvVar2,0,&PlayElement::RTTI_Type_Descriptor,
                                   &Card::RTTI_Type_Descriptor,0);
      if (piVar5 == (int *)0x0) break;
      (**(code **)(*piVar5 + 0x128))(uVar4);
      iVar6 = Game_getMyPlayerID(*(void **)((int)this + 8));
      if (*(int *)((int)this + 4) == iVar6) {
        EvaluationEnvironment_ctor();
        uStack_4 = 0;
        (**(code **)(*piVar3 + 0x84))(auStack_a0);
        EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 8));
        FUN_013815b0(piVar3);
        set_play_element_id_field(auStack_a0,piVar5);
        Card_callWithSuppressNotifications(auStack_a0);
        uStack_4 = 0xffffffff;
        FUN_01385460();
      }
      if (*(int **)((int)this + 0x40) <= piVar7) {
        FUN_00d83c2d();
      }
      piVar7 = piVar7 + 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

