// addr: 0x01434530
// name: Card_getOrCreateArchetypeVector
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Card_getOrCreateArchetypeVector(void) */

void Card_getOrCreateArchetypeVector(void)

{
                    /* Fetches or creates the vector entry in an int-to-int-vector map while
                       Card_collectArchetypesForType is building archetype lists. */
  IntToIntVectorMap_getOrCreate(&stack0x00000004);
  return;
}

