// addr: 0x014de6e0
// name: GameCommand_DragStopped_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DragStopped_serialize(void * this, void * stream) */

void __thiscall GameCommand_DragStopped_serialize(void *this,void *stream)

{
                    /* Writes GameCommand_DragStopped debug/serialized output with base GameCommand
                       fields and Card ID. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_DragStopped\n");
  GameCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Card ID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_DragStopped\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

