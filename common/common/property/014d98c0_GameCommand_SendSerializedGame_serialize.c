// addr: 0x014d98c0
// name: GameCommand_SendSerializedGame_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SendSerializedGame_serialize(void * this, void * serializer)
    */

void __thiscall GameCommand_SendSerializedGame_serialize(void *this,void *serializer)

{
  void *size;
  
                    /* Serializes/dumps a GameCommand_SendSerializedGame including uncompressed
                       length, compressed length, and the serialized game buffer. Evidence is the
                       field labels Length, CompressedLength, and mSerializedGame. */
  size = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(serializer,"Starting GameCommand_SendSerializedGame\n");
  GameCommand_serialize(this,serializer);
  DebugStream_writeCString(serializer,"Length: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(serializer,"CompressedLength: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(serializer,"mSerializedGame: ");
  GrowableBuffer_append
            (serializer,*(void **)((int)this + 0x24),*(void **)((int)this + 0x2c),(int)size);
  DebugStream_writeCString(serializer,"Ending GameCommand_SendSerializedGame\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

