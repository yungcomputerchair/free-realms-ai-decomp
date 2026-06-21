// addr: 0x01429e90
// name: GameCommand_FatalError_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_FatalError_dump(void * this, void * debugStream) */

void __thiscall GameCommand_FatalError_dump(void *this,void *debugStream)

{
  void *size;
  
                    /* Dumps GameCommand_FatalError, including exception object,
                       uncompressed/compressed lengths, and serialized game bytes. Evidence is the
                       'Starting/Ending GameCommand_FatalError' strings and field labels. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting GameCommand_FatalError\n");
  GameCommand_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"ExceptionObj: ");
  size = debugStream;
  (**(code **)(*(int *)((int)this + 0x24) + 0x28))();
  DebugStream_writeCString(debugStream,"Length: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x8c));
  DebugStream_writeCString(debugStream,"CompressedLength: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x90));
  DebugStream_writeCString(debugStream,"mSerializedGame: ");
  GrowableBuffer_append
            (debugStream,*(void **)((int)this + 0x88),*(void **)((int)this + 0x90),(int)size);
  DebugStream_writeCString(debugStream,"Ending GameCommand_FatalError\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

