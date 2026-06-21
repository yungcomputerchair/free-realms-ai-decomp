// addr: 0x014300c0
// name: GameCommand_RemovePlayer_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_RemovePlayer_dump(void * this, void * out) */

void __thiscall GameCommand_RemovePlayer_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_68 [100];
  uint local_4;
  
                    /* Writes a debug/text dump of the GameCommand_RemovePlayer command, including
                       loss type. Evidence is the command banner and field format strings in the
                       function. */
  local_4 = DAT_01b839d8 ^ (uint)local_68;
  FUN_01241650("Remove Player Game Command\n",0x1b);
  GameCommand_dump(this,out);
  FUN_01241650("Loss Type: ",0xb);
  _sprintf(local_68,"%d",*(undefined4 *)((int)this + 0x24));
  pcVar2 = local_68;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_68,(int)pcVar2 - (int)(local_68 + 1));
  return;
}

