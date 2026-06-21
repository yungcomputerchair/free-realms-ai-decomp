// addr: 0x013ceea0
// name: Deck_collectPersistentComponents
// subsystem: common/common/property
// source (binary assert): common/common/property/Deck.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Deck_collectPersistentComponents(void * this, void * out, int version) */

bool __thiscall Deck_collectPersistentComponents(void *this,void *out,int version)

{
                    /* Builds a vector of PersistentComponent subobjects for this deck for the
                       requested version. It asserts version is valid, resolves each deck entry to
                       an Archetype, pushes the component pointer at archetype+4, and returns true.
                        */
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\Deck.cpp",0xeb);
  }
  Deck_collectPersistentComponentsFromEntries((void *)((int)this + 0x78),out,version);
  return true;
}

