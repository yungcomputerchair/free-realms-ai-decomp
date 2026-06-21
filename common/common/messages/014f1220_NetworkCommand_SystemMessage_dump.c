// addr: 0x014f1220
// name: NetworkCommand_SystemMessage_dump
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_SystemMessage_dump(void * thisObj, void * stream) */

void __thiscall NetworkCommand_SystemMessage_dump(void *this,void *thisObj,void *stream)

{
                    /* Emits a textual/debug dump for NetworkCommand_SystemMessage, including the
                       NetworkCommand base and Message string field. Evidence is the Starting/Ending
                       NetworkCommand_SystemMessage literals and Message label. */
  (**(code **)(*(int *)this + 8))(thisObj);
  DebugStream_writeCString(thisObj,"Starting NetworkCommand_SystemMessage\n");
  NetworkCommand_dump(this,thisObj);
  DebugStream_writeCString(thisObj,"Message:\n");
  Serializer_appendString(thisObj,(void *)((int)this + 4));
  DebugStream_writeCString(thisObj,"Ending NetworkCommand_SystemMessage\n");
  (**(code **)(*(int *)this + 0xc))(thisObj);
  return;
}

