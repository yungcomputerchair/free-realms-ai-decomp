// addr: 0x0143a650
// name: ArchetypeVisitor_visitArchetypeByField3c
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeVisitor_visitArchetypeByField3c(void * this, void * archetype)
    */

void __thiscall ArchetypeVisitor_visitArchetypeByField3c(void *this,void *archetype)

{
  void *this_00;
  uint uVar1;
  undefined4 uVar2;
  
                    /* Looks up an archetype through the singleton ArchetypeDB using the source
                       archetype's field at offset 0x3c and passes the resolved archetype to a
                       virtual visitor method. */
  ArchetypeDB_getInstance();
  uVar1 = Archetype_getField3c(this_00);
  ArchetypeDB_getInstance();
  uVar2 = ArchetypeDB_getArchetype(archetype,uVar1);
  (**(code **)(*(int *)this + 4))(uVar2);
  return;
}

