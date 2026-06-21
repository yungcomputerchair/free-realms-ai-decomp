// addr: 0x014dc6b0
// name: GameCommand_LostPlayer_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_LostPlayer_dump(void * this, void * out) */

void __thiscall GameCommand_LostPlayer_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3f0 [1004];
  uint local_4;
  
                    /* Writes a debug/text dump of the GameCommand_LostPlayer command, including
                       account ID. Evidence is the command banner and field format strings in the
                       function. */
  local_4 = DAT_01b839d8 ^ (uint)local_3f0;
  FUN_01241650("Lost Player Game Command\n",0x19);
  GameCommand_dump(this,out);
  _sprintf(local_3f0,"Account ID: %d\n",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_3f0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f0,(int)pcVar2 - (int)(local_3f0 + 1));
  return;
}

