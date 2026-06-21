// addr: 0x014e6500
// name: ArchCommand_DeleteArchetype_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_DeleteArchetype_serialize(void * this, void * serializer) */

void __thiscall ArchCommand_DeleteArchetype_serialize(void *this,void *serializer)

{
                    /* Serializes DeleteArchetype by writing the ArchCommand base account data
                       followed by two integer command fields. */
  (**(code **)(*(int *)this + 8))(serializer);
  ArchCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

