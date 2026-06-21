// addr: 0x013479d0
// name: Game_setFatalErrorSerializationEnabled
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_setFatalErrorSerializationEnabled(void * this, char enabled) */

void __thiscall Game_setFatalErrorSerializationEnabled(void *this,char enabled)

{
                    /* Setter for the byte flag at Game+0x94 controlling fatal-error serialization.
                       The function writes the enabled argument directly into the object field,
                       matching adjacent simple accessors and giving the anonymous flag a
                       descriptive role. */
  *(char *)((int)this + 0x2a8) = enabled;
  return;
}

