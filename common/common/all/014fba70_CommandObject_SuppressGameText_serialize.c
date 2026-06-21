// addr: 0x014fba70
// name: CommandObject_SuppressGameText_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_SuppressGameText_serialize(void * this, void * stream) */

void __thiscall CommandObject_SuppressGameText_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_SuppressGameText block using the base
                       CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_SuppressGameText\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_SuppressGameText\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

