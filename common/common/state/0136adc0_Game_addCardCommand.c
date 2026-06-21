// addr: 0x0136adc0
// name: Game_addCardCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_addCardCommand(void * game, void * command, void * card, int
   duration_) */

void __thiscall Game_addCardCommand(void *this,void *game,void *command,void *card,int duration_)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  void **ppvVar8;
  void *local_10;
  void *local_c;
  undefined1 local_8 [8];
  
  pvVar4 = card;
                    /* Adds a card command to the game, rejecting null commands/cards and logging
                       command name/id/duration/card id. */
  pvVar3 = command;
  if (command == (void *)0x0) {
    Game_logGeneral(this,"Trying to add Null command!",unaff_ESI);
    return;
  }
  if (card == (void *)0x0) {
    Game_logGeneral(this,"Trying to add NULL card command.",unaff_EDI);
    return;
  }
  iVar5 = CommandObject_getDurationMap();
  if (*(uint *)(iVar5 + 0x18) < 0x10) {
    iVar5 = iVar5 + 4;
  }
  else {
    iVar5 = *(int *)(iVar5 + 4);
  }
  uVar6 = PlayElement_getId(pvVar4);
  PlayElement_getId(pvVar3,game,uVar6);
  Game_logGeneral(this,"Adding Command: %s (%d) (%p) with duration: %d from card: %d (%p)",iVar5);
  local_c = pvVar3;
  local_10 = pvVar4;
  piVar7 = (int *)FUN_01354a00(local_8,&game);
  iVar5 = *piVar7;
  iVar1 = piVar7[1];
  iVar2 = *(int *)((int)this + 0x10c);
  if ((iVar5 == 0) || (iVar5 != (int)this + 0x108)) {
    FUN_00d83c2d();
  }
  if (iVar1 == iVar2) {
    ppvVar8 = &local_10;
    Game_IntKeyTree_getOrInsertRecord(&game);
    FUN_01361a10(ppvVar8);
    return;
  }
  if (iVar5 == 0) {
    FUN_00d83c2d();
  }
  if (iVar1 == *(int *)(iVar5 + 4)) {
    FUN_00d83c2d();
  }
  FUN_01361a10(&local_10);
  return;
}

