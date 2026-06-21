// addr: 0x014ce350
// name: LobbyCommand_AddIgnoreByName_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnoreByName_dump(void * this, void * stream) */

void __thiscall LobbyCommand_AddIgnoreByName_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_AddIgnoreByName, including the
                       Ignore Name string field. Evidence is the Starting/Ending
                       LobbyCommand_AddIgnoreByName strings and Ignore Name label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_AddIgnoreByName\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Ignore Name: ");
  Serializer_appendString(stream,(void *)((int)this + 8));
  DebugStream_writeCString(stream,"Ending LobbyCommand_AddIgnoreByName\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

