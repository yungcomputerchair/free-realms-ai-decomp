// addr: 0x014b48a0
// name: MatchCommand_SelectStartPosition_printDebug
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MatchCommand_SelectStartPosition_printDebug(void * this, void * out) */

void __thiscall MatchCommand_SelectStartPosition_printDebug(void *this,void *out)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char local_3ec [1000];
  uint local_4;
  
                    /* Prints a Select Start Position Match Command debug dump with the selected
                       position and all available positions from a vector. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Select Start Position Match Command\n",0x24);
  GameCommand_MatchCommand_debugPrint(this,out);
  _sprintf(local_3ec,"Selected Position: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  puVar4 = *(undefined4 **)((int)this + 0x14);
  if (*(undefined4 **)((int)this + 0x18) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar2 = *(undefined4 **)((int)this + 0x18);
    if (puVar2 < *(undefined4 **)((int)this + 0x14)) {
      FUN_00d83c2d();
    }
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar2) break;
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x18) <= puVar4) {
      FUN_00d83c2d();
    }
    _sprintf(local_3ec,"AvailablePosition: %d\n",*puVar4);
    pcVar3 = local_3ec;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
    if (*(undefined4 **)((int)this + 0x18) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

