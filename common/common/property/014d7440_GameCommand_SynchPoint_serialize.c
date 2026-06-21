// addr: 0x014d7440
// name: GameCommand_SynchPoint_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SynchPoint_serialize(void * this, void * serializer) */

void __thiscall GameCommand_SynchPoint_serialize(void *this,void *serializer)

{
  void *map;
  
                    /* Serializes/dumps a GameCommand_SynchPoint: base GameCommand data, two integer
                       fields, a map/vector field, and another integer. Evidence is the
                       Starting/Ending GameCommand_SynchPoint strings. */
  map = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(serializer,"Starting GameCommand_SynchPoint\n");
  GameCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x24));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x28));
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 0x30),map);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(serializer,"Ending GameCommand_SynchPoint\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

