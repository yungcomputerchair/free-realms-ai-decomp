// addr: 0x01429a90
// name: GameCommand_FatalError_assignException
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_FatalError_assignException(void * this, void * source) */

void __thiscall GameCommand_FatalError_assignException(void *this,void *source)

{
                    /* Assigns/copies the embedded Exception data used by a FatalError game command.
                        */
  Exception_assign((void *)((int)this + 0x24),source);
  return;
}

