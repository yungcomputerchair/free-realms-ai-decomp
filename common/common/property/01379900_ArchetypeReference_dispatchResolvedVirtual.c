// addr: 0x01379900
// name: ArchetypeReference_dispatchResolvedVirtual
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeReference_dispatchResolvedVirtual(void * this) */

void __fastcall ArchetypeReference_dispatchResolvedVirtual(void *this)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Resolves the archetype id returned by a virtual method through ArchetypeDB,
                       then dispatches through the resolved archetype when found or through a
                       fallback vtable otherwise. This is a virtual forwarding helper for
                       archetype-backed objects. */
  uVar1 = (**(code **)(*(int *)this + 0xd4))();
  ArchetypeDB_getInstance();
  iVar2 = ArchetypeDB_getArchetype(uVar1,*(undefined4 *)((int)this + 0xc));
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01379930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar2 + 4) + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0137993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)((int)this + 4) + 4))();
  return;
}

