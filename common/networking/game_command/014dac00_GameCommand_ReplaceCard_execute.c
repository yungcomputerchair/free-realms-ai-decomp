// addr: 0x014dac00
// name: GameCommand_ReplaceCard_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandReplaceCard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: int GameCommand_ReplaceCard_execute(void * this) */

int __fastcall GameCommand_ReplaceCard_execute(void *this)

{
  int *objectPtr;
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  int *objectPtr_00;
  int iVar5;
  code *pcVar6;
  int elementId_;
  undefined4 *puVar7;
  undefined4 uVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  undefined4 uVar11;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes ReplaceCard: validates game and player id, updates the target
                       player's card slot, notifies the game, then adjusts the replacement Card and
                       related cards according to card type. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016adf48;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mGame","..\\common\\networking\\game_command\\GameCommandReplaceCard.cpp",0x30,
                 uVar2);
  }
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPlayerID","..\\common\\networking\\game_command\\GameCommandReplaceCard.cpp",0x31
                 ,uVar2);
  }
  GameCommand_execute(this);
  piVar3 = (int *)Game_getOrCreateCardForForcedID
                            (*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 4));
  (**(code **)(*piVar3 + 0xb8))();
  (**(code **)(*piVar3 + 0xb4))(*(undefined4 *)((int)this + 0x28));
  (**(code **)(**(int **)((int)this + 8) + 0xc4))
            (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x24));
  uVar11 = 0;
  pTVar10 = &Card::RTTI_Type_Descriptor;
  pTVar9 = &PlayElement::RTTI_Type_Descriptor;
  uVar8 = 0;
  pvVar4 = find_play_element_in_maps(*(void **)((int)this + 8),elementId_);
  objectPtr_00 = (int *)FUN_00d8d382(pvVar4,uVar8,pTVar9,pTVar10,uVar11);
  if (objectPtr_00 == (int *)0x0) {
    ExceptionList = pvStack_18;
    return 1;
  }
  uVar8 = (**(code **)(*objectPtr_00 + 0x30))();
  iVar5 = unknown_getField38(objectPtr_00);
  if (iVar5 == 1) {
    pcVar6 = *(code **)(*piVar3 + 0x138);
  }
  else {
    if (iVar5 != 3) goto LAB_014dad09;
    pcVar6 = *(code **)(*piVar3 + 0x128);
  }
  (*pcVar6)(uVar8);
LAB_014dad09:
  puStack_24 = (undefined4 *)0x0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_10 = 0;
  (**(code **)(*objectPtr_00 + 0x34))(&puStack_28);
  puVar1 = puStack_24;
  if (puStack_24 < puStack_28) {
    FUN_00d83c2d();
  }
  puVar7 = puStack_28;
  if (puStack_24 < puStack_28) {
    FUN_00d83c2d();
  }
  do {
    if (&stack0x00000000 == &DAT_0000002c) {
      FUN_00d83c2d();
    }
    if (puVar7 == puVar1) {
      (**(code **)(*objectPtr_00 + 0x150))();
      uStack_10 = 0xffffffff;
      if (puStack_24 == (undefined4 *)0x0) {
        ExceptionList = pvStack_18;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(puStack_24);
    }
    if (&stack0x00000000 == &DAT_0000002c) {
      FUN_00d83c2d();
    }
    if (puStack_24 <= puVar7) {
      FUN_00d83c2d();
    }
    objectPtr = (int *)*puVar7;
    if (objectPtr != objectPtr_00) {
      iVar5 = unknown_getField38(objectPtr);
      if (iVar5 == 1) {
        pcVar6 = *(code **)(*objectPtr + 0x138);
      }
      else {
        if (iVar5 != 3) goto LAB_014dadaf;
        pcVar6 = *(code **)(*objectPtr + 0x128);
      }
      (*pcVar6)(piVar3);
    }
LAB_014dadaf:
    if (puStack_24 <= puVar7) {
      FUN_00d83c2d();
    }
    puVar7 = puVar7 + 1;
  } while( true );
}

