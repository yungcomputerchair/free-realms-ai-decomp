// addr: 0x01379630
// name: ArchetypeReference_resolveArchetype
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeReference_resolveArchetype(void * this) */

void __fastcall ArchetypeReference_resolveArchetype(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* Forces an ArchetypeDB lookup for this object's database/id pair without
                       checking the cached pointer. It appears to ensure the referenced archetype is
                       loaded. */
  uVar2 = *(undefined4 *)((int)this + 0xc);
  uVar1 = *(undefined4 *)((int)this + 0x18);
  ArchetypeDB_getInstance();
  ArchetypeDB_getArchetype(uVar1,uVar2);
  return;
}

