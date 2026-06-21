// addr: 0x014d74c0
// name: GameCommand_SynchPoint_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_SynchPoint_dump(void * this, void * out) */

void __thiscall GameCommand_SynchPoint_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Writes a debug/text dump of the GameCommand_SynchPoint command, including
                       phase ID, state ID, and turn number. Evidence is the command banner and field
                       format strings in the function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("Synch Point Game Command\n",0x19);
  GameCommand_dump(this,out);
  _sprintf(local_3ec,"phaseID: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"stateID: %d\n",*(undefined4 *)((int)this + 0x28));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  _sprintf(local_3ec,"turnNumber: %d\n",*(undefined4 *)((int)this + 0x2c));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

