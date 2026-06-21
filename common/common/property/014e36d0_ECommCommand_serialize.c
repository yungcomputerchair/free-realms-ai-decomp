// addr: 0x014e36d0
// name: ECommCommand_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_serialize(void * this, void * serializer) */

void __thiscall ECommCommand_serialize(void *this,void *serializer)

{
                    /* Serializes/debug-dumps the ECommCommand base portion, emitting start/end
                       markers and the AccountID field. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting ECommCommand\n");
  DebugStream_writeCString(serializer,"AccountID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  DebugStream_writeCString(serializer,"Ending ECommCommand\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

