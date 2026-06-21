// addr: 0x01424ca0
// name: GameCommand_DrawCards_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_DrawCards_debugPrint(void * this, void * out) */

void __thiscall GameCommand_DrawCards_debugPrint(void *this,void *out)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  void *local_3f8 [2];
  uint local_3f0;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a draw-cards command, including source, card count, and all card
                       ids in the cards vector. */
  local_4 = DAT_01b839d8 ^ (uint)local_3f8;
  local_3f8[0] = out;
  FUN_01241650("Draw Cards Game Command\n",0x18);
  GameCommand_dump(this,out);
  _sprintf(local_3ec,"Source: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar4 = local_3ec;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
  if (*(int *)((int)this + 0x3c) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
  }
  _sprintf(local_3ec,"Card count: %d\n",iVar5);
  pcVar4 = local_3ec;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
  FUN_01241650("Cards:",6);
  uVar6 = 0;
  while( true ) {
    uVar3 = *(uint *)((int)this + 0x3c);
    if ((uVar3 == 0) || ((uint)((int)(*(int *)((int)this + 0x40) - uVar3) >> 2) <= uVar6))
    goto LAB_01424e0d;
    if ((uVar3 == 0) || ((uint)((int)(*(uint *)((int)this + 0x40) - uVar3) >> 2) <= uVar6)) break;
    if (*(uint *)((int)this + 0x40) < uVar3) {
      FUN_00d83c2d();
    }
    puVar1 = (undefined4 *)(uVar3 + uVar6 * 4);
    local_3f0 = uVar3;
    if ((*(undefined4 **)((int)this + 0x40) < puVar1) ||
       (puVar1 < *(undefined4 **)((int)this + 0x3c))) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x40) <= puVar1) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec," %d ",*puVar1);
    pcVar4 = local_3ec;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_01241650(local_3ec,(int)pcVar4 - (int)(local_3ec + 1));
    uVar6 = uVar6 + 1;
  }
  FUN_01259830();
LAB_01424e0d:
  FUN_01241650(&DAT_01770548,1);
  return;
}

