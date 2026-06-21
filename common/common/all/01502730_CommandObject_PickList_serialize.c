// addr: 0x01502730
// name: CommandObject_PickList_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_PickList_serialize(void * this, void * stream) */

void __thiscall CommandObject_PickList_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_PickList block using the embedded
                       start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_PickList\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_PickList\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

