// addr: 0x013486d0
// name: GamePlayer_logFormattedMessage
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GamePlayer_logFormattedMessage(void * this, int unused_, char * fmt) */

void __cdecl GamePlayer_logFormattedMessage(void *this,int unused_,char *fmt)

{
  int iVar1;
  undefined4 uVar2;
  char local_3ec [1000];
  uint local_4;
  
                    /* Formats a message with vsnprintf, gets the player id, and dispatches the
                       formatted text through virtual slot 0x198. Used by many state/action handlers
                       for player messages. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  __vsnprintf(local_3ec,1000,fmt,&stack0x00000010);
  iVar1 = *(int *)this;
  uVar2 = GamePlayer_getPlayerId(local_3ec);
  (**(code **)(iVar1 + 0x198))(this,uVar2);
  return;
}

