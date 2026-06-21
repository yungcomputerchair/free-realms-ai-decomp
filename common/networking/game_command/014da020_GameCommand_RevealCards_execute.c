// addr: 0x014da020
// name: GameCommand_RevealCards_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandRevealCards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_RevealCards_execute(void * this) */

int __fastcall GameCommand_RevealCards_execute(void *this)

{
  uint uVar1;
  void **item;
  void *pvVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  int iStack_24;
  int iStack_20;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes RevealCards by ensuring the active state is RevealState, converting
                       each stored PlayElement id to a Card, accumulating the cards, and passing
                       them to the state's revealed-card setter. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016adcd8;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandRevealCards.cpp",0x6a);
  }
  GameCommand_execute(this);
  pvVar2 = Game_getCurrentTurn(*(void **)((int)this + 8));
  GameTurn_getCurrentStateMachine(pvVar2);
  iVar3 = StateMachine_getCurrentState();
  if (iVar3 != 0) {
    uVar5 = FUN_00d8d382(iVar3,0,&StateMachineState::RTTI_Type_Descriptor,
                         &RevealState::RTTI_Type_Descriptor,0);
    iStack_20 = (int)uVar5;
    if (iStack_20 != 0) {
      uVar1 = *(uint *)((int)this + 0x2c);
      if (uVar1 < *(uint *)((int)this + 0x28)) {
        FUN_00d83c2d();
        uVar5 = CONCAT44(extraout_EDX,iStack_20);
      }
      iStack_20 = (int)uVar5;
      pvStack_18 = (void *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 0;
      uVar4 = *(uint *)((int)this + 0x28);
      if (*(uint *)((int)this + 0x2c) < uVar4) {
        FUN_00d83c2d();
        uVar5 = CONCAT44(extraout_EDX_00,iStack_20);
      }
      while( true ) {
        iStack_20 = (int)uVar5;
        if (this == (void *)0xffffffdc) {
          FUN_00d83c2d();
          uVar5 = CONCAT44(extraout_EDX_01,iStack_20);
        }
        iStack_20 = (int)uVar5;
        if (uVar4 == uVar1) break;
        if (this == (void *)0xffffffdc) {
          FUN_00d83c2d();
          uVar5 = CONCAT44(extraout_EDX_02,iStack_20);
        }
        iStack_20 = (int)uVar5;
        if (*(uint *)((int)this + 0x2c) <= uVar4) {
          FUN_00d83c2d();
          uVar5 = CONCAT44(extraout_EDX_03,iStack_20);
        }
        iStack_20 = (int)uVar5;
        uVar9 = 0;
        pTVar8 = &Card::RTTI_Type_Descriptor;
        pTVar7 = &PlayElement::RTTI_Type_Descriptor;
        uVar6 = 0;
        pvVar2 = find_play_element_in_maps
                           (*(void **)((int)this + 8),(int)((ulonglong)uVar5 >> 0x20));
        uVar5 = FUN_00d8d382(pvVar2,uVar6,pTVar7,pTVar8,uVar9);
        iStack_24 = (int)uVar5;
        if (iStack_24 != 0) {
          PointerVector_pushBack(auStack_1c,&iStack_24,item);
          uVar5 = CONCAT44(extraout_EDX_04,iStack_24);
        }
        iStack_24 = (int)uVar5;
        if (*(uint *)((int)this + 0x2c) <= uVar4) {
          FUN_00d83c2d();
          uVar5 = CONCAT44(extraout_EDX_05,iStack_24);
        }
        iStack_24 = (int)uVar5;
        uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),iStack_20);
        uVar4 = uVar4 + 4;
      }
      FUN_01460a50(auStack_1c);
      uStack_4 = 0xffffffff;
      if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
    }
  }
  ExceptionList = local_c;
  return 1;
}

