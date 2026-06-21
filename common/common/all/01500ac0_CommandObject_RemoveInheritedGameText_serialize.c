// addr: 0x01500ac0
// name: CommandObject_RemoveInheritedGameText_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_RemoveInheritedGameText_serialize(void * this, void *
   stream) */

void __thiscall CommandObject_RemoveInheritedGameText_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_RemoveInheritedGameText block using
                       the embedded start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_RemoveInheritedGameText\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_RemoveInheritedGameText\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

