// addr: 0x0142fe80
// name: GameCommand_RemovePlayer_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_RemovePlayer_dump(void * this, void * serializer) */

void __thiscall GameCommand_RemovePlayer_dump(void *this,void *serializer)

{
                    /* Dumps GameCommand_RemovePlayer after the base GameCommand data and writes the
                       Loss Type field. Evidence is exact "Starting/Ending GameCommand_RemovePlayer"
                       and "Loss Type:" strings. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting GameCommand_RemovePlayer\n");
  GameCommand_serialize(this,serializer);
  DebugStream_writeCString(serializer,"Loss Type:");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(serializer,"Ending GameCommand_RemovePlayer\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

