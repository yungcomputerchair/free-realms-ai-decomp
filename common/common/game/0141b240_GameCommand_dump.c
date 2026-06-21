// addr: 0x0141b240
// name: GameCommand_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_dump(void * this, void * out) */

void __thiscall GameCommand_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Dumps common GameCommand fields: GameID and PlayerID, after the shared
                       persistent/base dump prefix. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_0140c290(out);
  _sprintf(local_3ec,"GameID: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"PlayerID: %d\n",*(undefined4 *)((int)this + 4));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

