// addr: 0x014e2100
// name: GameCommand_ActionPlayed_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ActionPlayed_writeDebug(void * this, void * debugStream) */

void __thiscall GameCommand_ActionPlayed_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for GameCommand_ActionPlayed, including origin
                       card/instance ids, two targets, action id, selected card, and select-set
                       flag, bracketed by Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting GameCommand_ActionPlayed\n");
  GameCommand_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"Origin Card ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(debugStream,"Origin Instance ID (first): ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(debugStream,"Origin Instance ID (second): ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(debugStream,"Target 1 ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x30));
  DebugStream_writeCString(debugStream,"Target 1 Instance ID (first): ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x34));
  DebugStream_writeCString(debugStream,"Target 1 Instance ID (second): ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x38));
  DebugStream_writeCString(debugStream,"Target 1 Player ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x3c));
  DebugStream_writeCString(debugStream,"Target 2 ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x40));
  DebugStream_writeCString(debugStream,"Target 2 Instance ID (first): ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x44));
  DebugStream_writeCString(debugStream,"Target 2 Instance ID (second): ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x48));
  DebugStream_writeCString(debugStream,"Target 2 Player ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x4c));
  DebugStream_writeCString(debugStream,"Action ID: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x50));
  DebugStream_writeCString(debugStream,"First Card Selected: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x54));
  DebugStream_writeCString(debugStream,"Select Set: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x58));
  DebugStream_writeCString(debugStream,"Ending GameCommand_ActionPlayed\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

