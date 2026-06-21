// addr: 0x014ccff0
// name: LobbyCommand_AdjournedGameAccount_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_AdjournedGameAccount_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_AdjournedGameAccount_debugPrint(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *local_3f4;
  char local_3f0 [1004];
  uint local_4;
  
                    /* Debug-prints an adjourned game account command, including match id, game id,
                       and all account ids in the embedded vector. */
  local_4 = DAT_01b839d8 ^ (uint)&local_3f4;
  FUN_01241650("Adjourned Game Account Command\n",0x1f);
  AccountCommand_dump(this,out);
  _sprintf(local_3f0,"MatchID: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  _sprintf(local_3f0,"GameID: %d\n",*(undefined4 *)((int)this + 8));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  local_3f4 = *(undefined4 **)((int)this + 0x18);
  if (local_3f4 < *(undefined4 **)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  puVar3 = *(undefined4 **)((int)this + 0x14);
  if (*(undefined4 **)((int)this + 0x18) < puVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_3f4) break;
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x18) <= puVar3) {
      FUN_00d83c2d();
    }
    _sprintf(local_3f0,"AccountID: %d\n",*puVar3);
    pcVar2 = local_3f0;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
    if (*(undefined4 **)((int)this + 0x18) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 1;
  }
  return;
}

