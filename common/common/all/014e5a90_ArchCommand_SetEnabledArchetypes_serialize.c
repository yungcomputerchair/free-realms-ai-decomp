// addr: 0x014e5a90
// name: ArchCommand_SetEnabledArchetypes_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_SetEnabledArchetypes_serialize(void * this, void * stream) */

void __thiscall ArchCommand_SetEnabledArchetypes_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes an ArchCommand_SetEnabledArchetypes object by writing
                       common ArchCommand data and an integer vector payload. */
  (**(code **)(*(int *)this + 8))(stream);
  ArchCommand_serialize(this,stream);
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

