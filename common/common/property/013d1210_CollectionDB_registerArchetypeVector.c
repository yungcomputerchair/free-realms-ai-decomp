// addr: 0x013d1210
// name: CollectionDB_registerArchetypeVector
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_registerArchetypeVector(void * this) */

void __fastcall CollectionDB_registerArchetypeVector(void *this)

{
  int iVar1;
  void *archetype;
  void *this_00;
  uint version;
  int index;
  
                    /* Walks a vector of 0x1c-byte entries, retrieves an archetype pointer for each
                       via FUN_013d1100, and inserts it into ArchetypeDB keyed by
                       Archetype_getField3c. Evidence is the loop over +0xfc/+0x100 and
                       ArchetypeDB_insertArchetype. */
  index = 0;
  while( true ) {
    iVar1 = 0;
    if (*(int *)((int)this + 0xfc) != 0) {
      iVar1 = (*(int *)((int)this + 0x100) - *(int *)((int)this + 0xfc)) / 0x1c;
    }
    if (iVar1 <= index) break;
    archetype = (void *)PacketBuffer_parseIndexedRecord(this,index);
    if (archetype != (void *)0x0) {
      ArchetypeDB_getInstance();
      version = Archetype_getField3c(this_00);
      ArchetypeDB_getInstance();
      ArchetypeDB_insertArchetype(archetype,version);
    }
    index = index + 1;
  }
  return;
}

