// addr: 0x014e72f0
// name: ArchCommand_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_serialize(void * this, void * serializer) */

void __thiscall ArchCommand_serialize(void *this,void *serializer)

{
                    /* Serializes/debug-dumps the ArchCommand base portion, emitting start/end
                       markers and the AccountID field. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting ArchCommand\n");
  DebugStream_writeCString(serializer,"AccountID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  DebugStream_writeCString(serializer,"Ending ArchCommand\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

