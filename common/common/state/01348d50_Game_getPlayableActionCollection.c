// addr: 0x01348d50
// name: Game_getPlayableActionCollection
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_getPlayableActionCollection(void * this) */

void * __fastcall Game_getPlayableActionCollection(void *this)

{
                    /* Returns the field at offset +0x2ec. Caller names include
                       Player_getPlayableActionsForCard and PropertyCommand_emitArchetypeActions,
                       suggesting a playable-action collection accessor. */
  return *(void **)((int)this + 0x2ec);
}

