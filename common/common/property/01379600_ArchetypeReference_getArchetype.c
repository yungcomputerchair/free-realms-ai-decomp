// addr: 0x01379600
// name: ArchetypeReference_getArchetype
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArchetypeReference_getArchetype(void * this) */

void * __fastcall ArchetypeReference_getArchetype(void *this)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Lazily resolves and caches an Archetype pointer using an ArchetypeDB pointer
                       and archetype id stored in the object. It initializes the DB, fetches the
                       archetype, and stores it at offset 0x1c. */
  iVar2 = *(int *)((int)this + 0x18);
  if ((iVar2 != 0) && (*(int *)((int)this + 0x1c) == 0)) {
    uVar1 = *(undefined4 *)((int)this + 0xc);
    ArchetypeDB_getInstance();
    uVar1 = ArchetypeDB_getArchetype(iVar2,uVar1);
    *(undefined4 *)((int)this + 0x1c) = uVar1;
  }
  return *(void **)((int)this + 0x1c);
}

