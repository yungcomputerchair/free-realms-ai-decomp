// addr: 0x013cee60
// name: Deck_collectArchetypes
// subsystem: common/common/property
// source (binary assert): common/common/property/Deck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Deck_collectArchetypes(void * this, void * out, int version) */

bool __thiscall Deck_collectArchetypes(void *this,void *out,int version)

{
                    /* Builds a vector of Archetype pointers for this deck for the requested
                       version. It asserts version is not -1, walks the deck's card/archetype-id
                       vector at offset 0x78 via FUN_013cecf0, and returns true. */
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\Deck.cpp",0xe3);
  }
  Deck_collectArchetypesFromEntries((void *)((int)this + 0x78),out,version);
  return true;
}

