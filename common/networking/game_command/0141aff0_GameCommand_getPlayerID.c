// addr: 0x0141aff0
// name: GameCommand_getPlayerID
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_getPlayerID(void * this) */

int __fastcall GameCommand_getPlayerID(void *this)

{
                    /* Returns the base command/player id field at offset 0x04. This offset is
                       labeled PlayerID by the GameCommand serializer and is used by command
                       validation/logging paths. */
  return *(int *)((int)this + 4);
}

