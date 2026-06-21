// addr: 0x013d6de0
// name: Poll_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Poll_dump(void * this, void * debugStream) */

void __thiscall Poll_dump(void *this,void *debugStream)

{
                    /* Dumps a Poll object with id, two strings, option list, and three flag fields.
                       Evidence is 'Starting Poll' and Poll_optionList_serialize. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting Poll\n");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 4));
  Serializer_appendString(debugStream,(void *)((int)this + 8));
  Serializer_appendString(debugStream,(void *)((int)this + 0x24));
  Poll_optionList_serialize(&stack0x00000000,(int)this + 0x40);
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x50));
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x51));
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x52));
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

