// addr: 0x01347e40
// name: Game_getZoneCollection
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_getZoneCollection(void * this) */

void * __fastcall Game_getZoneCollection(void *this)

{
                    /* Returns the address of an embedded object at offset +0x330. Called by
                       target-query and action-node code; exact field name is not directly present,
                       so the name is inferred as a game collection accessor. */
  return (void *)((int)this + 0x330);
}

