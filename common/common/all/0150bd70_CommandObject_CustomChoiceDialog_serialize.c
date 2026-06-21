// addr: 0x0150bd70
// name: CommandObject_CustomChoiceDialog_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_CustomChoiceDialog_serialize(void * this, void * stream) */

void __thiscall CommandObject_CustomChoiceDialog_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_CustomChoiceDialog block using the
                       embedded start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_CustomChoiceDialog\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_CustomChoiceDialog\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

