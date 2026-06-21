// addr: 0x01364df0
// name: Game_removeCommandsFromCard
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01364fe0) */
/* WARNING: Removing unreachable block (ram,0x01364ff3) */
/* WARNING: Removing unreachable block (ram,0x013650ea) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: bool Game_removeCommandsFromCard(void * this, void * card) */

bool __thiscall Game_removeCommandsFromCard(void *this,void *card)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piStack_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Removes command records associated with a source card, undoing matching
                       discard-duration commands and deleting card-command pairs. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167f4f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (card != (void *)0x0) {
    uVar6 = PlayElement_getId(card,DAT_01b839d8 ^ (uint)&stack0xffffffac);
    Game_logGeneral(this,"Game::removeCommandsFromCard %d (%p)",uVar6);
  }
  piVar1 = *(int **)((int)this + 0x10c);
  piVar2 = (int *)*piVar1;
  do {
    while( true ) {
      if (this == (void *)0xfffffef8) {
        FUN_00d83c2d();
      }
      if (piVar2 == piVar1) {
        ExceptionList = local_c;
        return true;
      }
      if (this == (void *)0xfffffef8) {
        FUN_00d83c2d();
      }
      if (piVar2 == (int *)*(int *)((int)this + 0x10c)) {
        FUN_00d83c2d();
      }
      cVar5 = (**(code **)(*(int *)this + 100))(piVar2[3]);
      if (cVar5 == '\0') break;
      if (piVar2 == (int *)*(int *)((int)this + 0x10c)) {
        FUN_00d83c2d();
      }
      Game_logGeneral(this,
                      "Game::removeCommandFromCard: command doesn\'t have discard duration. duration: %d"
                      ,piVar2[3]);
      FUN_0134a830();
    }
    if (piVar2 == (int *)*(int *)((int)this + 0x10c)) {
      FUN_00d83c2d();
    }
    Game_logGeneral(this,"Game::removeCommandFromCard: Command has Discard Duration. %d",piVar2[3]);
    if (piVar2 == (int *)*(int *)((int)this + 0x10c)) {
      FUN_00d83c2d();
    }
    if (piVar2[5] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = piVar2[6] - piVar2[5] >> 3;
    }
    Game_logGeneral(this,"Game::removeCommandFromCard: length of pairList: %d",iVar7);
    uStack_4 = 0;
    piVar3 = (int *)piVar2[6];
    if (piVar3 < (int *)piVar2[5]) {
      FUN_00d83c2d();
    }
    piVar8 = (int *)piVar2[5];
    if ((int *)piVar2[6] < piVar8) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (piVar8 == piVar3) break;
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((int *)piVar2[6] <= piVar8) {
        FUN_00d83c2d();
      }
      if (((void *)*piVar8 == card) && (piVar4 = (int *)piVar8[1], piVar4 != (int *)0x0)) {
        iVar7 = CommandObject_getDurationMap();
        if (*(uint *)(iVar7 + 0x18) < 0x10) {
          iVar7 = iVar7 + 4;
        }
        else {
          iVar7 = *(int *)(iVar7 + 4);
        }
        Game_logGeneral(this,"Found Command %s from sourceCard, doing undo.",iVar7);
        (**(code **)(*piVar4 + 0x4c))();
        (**(code **)*piVar4)(1);
        FUN_01361a10(piVar8);
      }
      if ((int *)piVar2[6] <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 2;
    }
    piStack_38 = (int *)0x0;
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (piStack_38 == (int *)0x0) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      FUN_00d83c2d();
      piVar3 = (int *)piVar2[6];
      if (piVar3 < (int *)piVar2[5]) {
        FUN_00d83c2d();
      }
      piVar8 = (int *)piVar2[5];
      if ((int *)piVar2[6] < piVar8) {
        FUN_00d83c2d();
      }
      if (piVar8 != piVar3) {
        do {
          if ((*piVar8 == *piStack_38) && (piVar8[1] == piStack_38[1])) break;
          piVar8 = piVar8 + 2;
        } while (piVar8 != piVar3);
      }
      piVar3 = (int *)piVar2[6];
      if (piVar3 < (int *)piVar2[5]) {
        FUN_00d83c2d();
      }
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (piVar8 != piVar3) {
        piVar3 = (int *)piVar2[6];
        piVar4 = piVar8;
        while (piVar4 = piVar4 + 2, piVar4 != piVar3) {
          *piVar8 = *piVar4;
          piVar8[1] = piVar4[1];
          piVar8 = piVar8 + 2;
        }
        piVar2[6] = piVar2[6] + -8;
      }
      FUN_00d83c2d();
      piStack_38 = piStack_38 + 2;
    }
    uStack_4 = 0xffffffff;
    FUN_0134a830();
  } while( true );
}

