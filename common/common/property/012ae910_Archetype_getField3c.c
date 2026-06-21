// addr: 0x012ae910
// name: Archetype_getField3c
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Archetype_getField3c(void * this) */

uint __fastcall Archetype_getField3c(void *this)

{
                    /* Returns the 32-bit field at offset 0x3c from an Archetype-like object.
                       Evidence: many callers first fetch an Archetype via ArchetypeDB_getArchetype,
                       including CollectionItem_getArchetypeField54/getArchetypeField5c wrappers. */
  return *(uint *)((int)this + 0x3c);
}

