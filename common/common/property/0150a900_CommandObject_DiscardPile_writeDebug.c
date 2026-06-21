// addr: 0x0150a900
// name: CommandObject_DiscardPile_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_DiscardPile_writeDebug(void * this, void * debugStream) */

void __thiscall CommandObject_DiscardPile_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_DiscardPile, including discard reason,
                       number of cards, pile, random flag, and cost-effect flag, bracketed by
                       Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_DiscardPile\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"DiscardReason: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"NumCards: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x120));
  DebugStream_writeCString(debugStream,"Pile: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x124));
  DebugStream_writeCString(debugStream,"Random: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x128));
  DebugStream_writeCString(debugStream,"Cost Effect: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x129));
  DebugStream_writeCString(debugStream,"Ending CommandObject_DiscardPile\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

