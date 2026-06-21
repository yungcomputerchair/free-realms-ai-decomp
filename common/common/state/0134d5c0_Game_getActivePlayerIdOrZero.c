// addr: 0x0134d5c0
// name: Game_getActivePlayerIdOrZero
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_getActivePlayerIdOrZero(void * this) */

int __fastcall Game_getActivePlayerIdOrZero(void *this)

{
  uint uVar1;
  int iVar2;
  
                    /* If the current turn/game field exists and active player retrieval succeeds,
                       returns the active player id; otherwise returns 0. */
  if (*(void **)((int)this + 0x68) != (void *)0x0) {
    uVar1 = get_field_8(*(void **)((int)this + 0x68));
    if (uVar1 != 0) {
      iVar2 = GamePlayer_getPlayerId();
      return iVar2;
    }
  }
  return 0;
}

