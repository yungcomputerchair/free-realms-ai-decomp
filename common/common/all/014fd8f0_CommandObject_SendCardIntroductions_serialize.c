// addr: 0x014fd8f0
// name: CommandObject_SendCardIntroductions_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_SendCardIntroductions_serialize(void * this, void * stream)
    */

void __thiscall CommandObject_SendCardIntroductions_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CommandObject_SendCardIntroductions block using the
                       embedded start/end markers and the common CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_SendCardIntroductions\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CommandObject_SendCardIntroductions\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

