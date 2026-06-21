// addr: 0x013794e0
// name: Archetype_setDatabaseID
// subsystem: common/common/property
// source (binary assert): common/common/property/Archetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_setDatabaseID(void * this, int databaseID) */

void __thiscall Archetype_setDatabaseID(void *this,int databaseID)

{
                    /* Stores a non--1 database/storage id into the Archetype field at offset 0x0c.
                       ArchetypeDB callers invoke this when inserting or loading an Archetype
                       record. */
  if (databaseID == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\Archetype.cpp",0x9d);
  }
  *(int *)((int)this + 0xc) = databaseID;
  return;
}

