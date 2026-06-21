// addr: 0x0131b790
// name: ArchetypeReference_refreshFromDB
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeReference_refreshFromDB(void * this, int archetypeId) */

void __thiscall ArchetypeReference_refreshFromDB(void *this,int archetypeId)

{
  void *this_00;
  uint uVar1;
  
                    /* Refreshes or resolves an archetype reference through ArchetypeDB, preferring
                       an existing referenced object field at offset 0x20 when present. Evidence is
                       calls to ArchetypeDB_getInstance, Archetype_getField3c, and
                       ArchetypeDB_getArchetype. */
  ArchetypeDB_getInstance();
  uVar1 = Archetype_getField3c(this_00);
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = *(uint *)(*(int *)((int)this + 0xc) + 0x20);
  }
  ArchetypeDB_getInstance();
  ArchetypeDB_getArchetype(archetypeId,uVar1);
  return;
}

