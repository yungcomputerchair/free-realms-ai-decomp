// addr: 0x0143ada0
// name: ArchetypeLink_resolveAndCopy
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ArchetypeLink_resolveAndCopy(void * out, void * archetype) */

void * ArchetypeLink_resolveAndCopy(void *out,void *archetype)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates/copies an archetype link by resolving the source archetype's field
                       0x3c through ArchetypeDB and forwarding the resolved archetype to a copy
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697b09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ArchetypeDB_getInstance();
  uVar1 = Archetype_getField3c(this);
  ArchetypeDB_getInstance();
  uVar2 = ArchetypeDB_getArchetype(archetype,uVar1);
  FUN_0143abc0(out,uVar2);
  ExceptionList = local_c;
  return out;
}

