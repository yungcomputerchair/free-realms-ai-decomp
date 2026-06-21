// addr: 0x0131ceb0
// name: PlayElement_setOwnerPlayer
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall PlayElement_setOwnerPlayer(int *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
                    /* Associates a play element with a player and then reads the player id. */
  if (param_2 != (void *)0x0) {
    iVar1 = *param_1;
    iVar2 = unknown_getField30(param_2);
    (**(code **)(iVar1 + 0x48))(iVar2);
    GamePlayer_getPlayerId();
  }
  return;
}

