// addr: 0x014e6080
// name: ArchCommand_GetArchetypeID_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_GetArchetypeID_serialize(void * this, void * serializer) */

void __thiscall ArchCommand_GetArchetypeID_serialize(void *this,void *serializer)

{
                    /* Serializes GetArchetypeID by writing the ArchCommand base account data
                       followed by the two command-specific integer fields. */
  (**(code **)(*(int *)this + 8))(serializer);
  ArchCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

