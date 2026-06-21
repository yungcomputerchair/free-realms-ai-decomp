// addr: 0x014d6a10
// name: GuildCommand_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GuildCommand_debugPrint(void * this, void * out) */

void __thiscall GuildCommand_debugPrint(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Base GuildCommand debug/string formatter; after a no-op base formatter, it
                       appends the command account id. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_0140c290(out);
  _sprintf(local_3ec,"AccountID: %d\n",*(undefined4 *)((int)this + 4));
  pcVar2 = local_3ec;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar2 - (int)(local_3ec + 1));
  return;
}

