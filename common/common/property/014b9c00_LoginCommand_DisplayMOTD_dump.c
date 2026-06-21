// addr: 0x014b9c00
// name: LoginCommand_DisplayMOTD_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_DisplayMOTD_dump(void * this, void * debugStream) */

void __thiscall LoginCommand_DisplayMOTD_dump(void *this,void *debugStream)

{
                    /* Dumps LoginCommand_DisplayMOTD fields after base LoginCommand output,
                       including strings and integer flags/ids. Evidence is the 'Starting/Ending
                       LoginCommand_DisplayMOTD' strings. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting LoginCommand_DisplayMOTD\n");
  LoginCommand_writeDebug(this,debugStream);
  DebugStream_writeCString(debugStream,"");
  Serializer_appendString(debugStream,(void *)((int)this + 4));
  DebugStream_writeCString(debugStream,"");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(debugStream,"");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(debugStream,"");
  Serializer_appendString(debugStream,(void *)((int)this + 0x28));
  DebugStream_writeCString(debugStream,"Ending LoginCommand_DisplayMOTD\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

