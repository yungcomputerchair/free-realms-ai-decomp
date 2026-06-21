// addr: 0x014de3b0
// name: GameCommand_EndObserverMode_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_EndObserverMode_dump(void * this, void * out) */

void __thiscall GameCommand_EndObserverMode_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the GameCommand_EndObserverMode command,
                       including observer mode. Evidence is the command banner and field format
                       strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Set Observer Mode Game Command\n",0x1f);
  GameCommand_dump(this,out);
  _sprintf(local_3ec,"Observer Mode: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

