// addr: 0x01500e40
// name: CommandObject_RemoveAttrModFilter_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveAttrModFilter_serialize(void * this, void * stream)
    */

void __thiscall CommandObject_RemoveAttrModFilter_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_RemoveAttrModFilter block using the
                       embedded start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_RemoveAttrModFilter\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_RemoveAttrModFilter\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

