// addr: 0x01505190
// name: CommandObject_ModifyProperty_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_ModifyProperty_writeDebug(void * this, void * debugStream)
    */

void __thiscall CommandObject_ModifyProperty_writeDebug(void *this,void *debugStream)

{
                    /* Writes a debug dump for CommandObject_ModifyProperty, including property,
                       value data, attribute modifier, and modifier value data, bracketed by
                       Starting/Ending literals. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting CommandObject_ModifyProperty\n");
  CommandObject_dump(this,debugStream);
  DebugStream_writeCString(debugStream,"Property: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(debugStream,"ValueData: ");
  (**(code **)(*(int *)((int)this + 0x120) + 0x28))(debugStream);
  DebugStream_writeCString(debugStream,"AttributeModifier: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 300));
  DebugStream_writeCString(debugStream,"ValueData: ");
  (**(code **)(*(int *)((int)this + 0x130) + 0x28))(debugStream);
  DebugStream_writeCString(debugStream,"Ending CommandObject_ModifyProperty\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

