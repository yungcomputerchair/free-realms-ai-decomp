// addr: 0x0143ad60
// name: ArchetypeLink_resolveAndAssign
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeLink_resolveAndAssign(void * out, void * archetype) */

void ArchetypeLink_resolveAndAssign(void *out,void *archetype)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  
                    /* Resolves an archetype referenced by the input archetype's field 0x3c and
                       forwards it to another helper that assigns or stores the result. */
  ArchetypeDB_getInstance();
  uVar1 = Archetype_getField3c(this);
  ArchetypeDB_getInstance();
  uVar2 = ArchetypeDB_getArchetype(archetype,uVar1);
  FUN_0143a960(out,uVar2);
  return;
}

