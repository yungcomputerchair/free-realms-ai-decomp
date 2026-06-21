// addr: 0x01505a60
// name: CommandObject_LoseGame_setPlayerId
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_LoseGame_setPlayerId(void * this, int playerId_) */

void __thiscall CommandObject_LoseGame_setPlayerId(void *this,int playerId_)

{
                    /* Stores an explicit player id at offset 0x124 on CommandObject_LoseGame and
                       records it through the command property helper with key 0x3e. ActionNode
                       calls it only for the integer-valued lose-game action. */
  *(int *)((int)this + 0x124) = playerId_;
  set_integer_value_for_key(0x3e,playerId_);
  return;
}

