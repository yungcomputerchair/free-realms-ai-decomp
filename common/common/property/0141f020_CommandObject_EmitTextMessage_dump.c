// addr: 0x0141f020
// name: CommandObject_EmitTextMessage_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_EmitTextMessage_dump(void * this, void * debugStream) */

void __thiscall CommandObject_EmitTextMessage_dump(void *this,void *debugStream)

{
                    /* Dumps CommandObject_EmitTextMessage fields: message id, target class, and
                       message parts after base CommandObject output. Evidence is the
                       'Starting/Ending CommandObject_EmitTextMessage' strings and labels. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_EmitTextMessage\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"MessageID: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"MessageTargetClass: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x138));
  DebugStream_writeCString(debugStream,"MessageParts: ");
  FUN_01401c40((int)this + 0x13c);
  DebugStream_writeCString(debugStream,"Ending CommandObject_EmitTextMessage\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

