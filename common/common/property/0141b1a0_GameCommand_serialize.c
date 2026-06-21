// addr: 0x0141b1a0
// name: GameCommand_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_serialize(void * this, void * serializer) */

void __thiscall GameCommand_serialize(void *this,void *serializer)

{
  uint *timeValue;
  
                    /* Serializes/dumps base GameCommand fields: NetworkCommand base, player id,
                       game id, timestamp, and an associated dword-pair map. Evidence is
                       Starting/Ending GameCommand and field label strings. */
  timeValue = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(serializer,"Starting GameCommand\n");
  NetworkCommand_dump(this,serializer);
  DebugStream_writeCString(serializer,"PlayerID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  DebugStream_writeCString(serializer,"GameID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(serializer,"TimeStamp: ");
  Serializer_appendTimeValue(serializer,(void *)((int)this + 0x10),timeValue);
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 0x18),timeValue);
  DebugStream_writeCString(serializer,"Ending GameCommand\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

