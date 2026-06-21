// addr: 0x014e56b0
// name: ArchCommand_StoreArchetype_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_StoreArchetype_serialize(void * this, void * serializer) */

void __thiscall ArchCommand_StoreArchetype_serialize(void *this,void *serializer)

{
  int *piVar1;
  bool bVar2;
  
                    /* Serializes StoreArchetype by writing the ArchCommand base, an archetype
                       id/status field, and either a null marker or the nested archetype object's
                       serializer. */
  (**(code **)(*(int *)this + 8))(serializer);
  ArchCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(serializer,1);
    (**(code **)(*(int *)this + 0xc))(serializer);
    return;
  }
  bVar2 = Serializer_appendInteger(serializer,0);
  if (bVar2) {
    (**(code **)(*piVar1 + 0x28))(serializer);
  }
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

