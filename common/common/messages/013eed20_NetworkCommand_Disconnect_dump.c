// addr: 0x013eed20
// name: NetworkCommand_Disconnect_dump
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Disconnect_dump(void * thisObj, void * stream) */

void __thiscall NetworkCommand_Disconnect_dump(void *this,void *thisObj,void *stream)

{
                    /* Emits a textual/debug dump for NetworkCommand_Disconnect, including the
                       NetworkCommand base and Message string field. Evidence is the Starting/Ending
                       NetworkCommand_Disconnect literals and Message label. */
  (**(code **)(*(int *)this + 8))(thisObj);
  DebugStream_writeCString(thisObj,"Starting NetworkCommand_Disconnect\n");
  NetworkCommand_dump(this,thisObj);
  DebugStream_writeCString(thisObj,"Message:\n");
  Serializer_appendString(thisObj,(void *)((int)this + 4));
  DebugStream_writeCString(thisObj,"Ending NetworkCommand_Disconnect\n");
  (**(code **)(*(int *)this + 0xc))(thisObj);
  return;
}

