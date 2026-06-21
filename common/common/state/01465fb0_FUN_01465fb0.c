// addr: 0x01465fb0
// name: FUN_01465fb0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool check_button_player(void * expectedPlayer, int actualPlayerId_) */

bool __thiscall check_button_player(void *this,void *expectedPlayer,int actualPlayerId_)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  
                    /* Checks whether a button press came from the expected player and logs a
                       wrong-player error if not. Exact owning state class is not identifiable. */
  StateMachineState_getActivePlayer();
  pvVar2 = (void *)GamePlayer_getPlayerId();
  if (pvVar2 != expectedPlayer) {
    StateMachineState_getActivePlayer(expectedPlayer);
    uVar3 = GamePlayer_getPlayerId();
    uVar3 = StateMachineState_getGame("Got an buttonPressed from %d instead of %d.",uVar3);
    Game_logGeneralFormatted(uVar3);
    (**(code **)(*(int *)this + 0x88))();
    return false;
  }
  if (actualPlayerId_ == 1) {
    uVar1 = (**(code **)(*(int *)this + 0x7c))(expectedPlayer);
    return (bool)uVar1;
  }
  (**(code **)(*(int *)this + 0x88))();
  return true;
}

