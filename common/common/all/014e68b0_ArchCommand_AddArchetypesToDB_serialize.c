// addr: 0x014e68b0
// name: ArchCommand_AddArchetypesToDB_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_AddArchetypesToDB_serialize(void * this, void * stream) */

void __thiscall ArchCommand_AddArchetypesToDB_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes an ArchCommand_AddArchetypesToDB object by writing
                       common ArchCommand data and a string vector payload. */
  (**(code **)(*(int *)this + 8))(stream);
  ArchCommand_serialize(this,stream);
  STLVector_string_serialize((int)this + 8);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

