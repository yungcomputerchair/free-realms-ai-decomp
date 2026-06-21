// addr: 0x014b8770
// name: LoginCommand_GuestLogin_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_GuestLogin_dump(void * this, void * debugStream) */

void __thiscall LoginCommand_GuestLogin_dump(void *this,void *debugStream)

{
  void *map;
  
                    /* Dumps LoginCommand_GuestLogin, including base LoginCommand data, version type
                       map, and locale. Evidence is the 'Starting/Ending LoginCommand_GuestLogin'
                       strings. */
  map = debugStream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debugStream,"Starting LoginCommand_GuestLogin\n");
  LoginCommand_writeDebug(this,debugStream);
  DebugStream_writeCString(debugStream,"VersionTypeMap: ");
  Property_serializeDwordPairMap(&stack0x00000000,(void *)((int)this + 4),map);
  DebugStream_writeCString(debugStream,"Locale: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0x10));
  DebugStream_writeCString(debugStream,"Ending LoginCommand_GuestLogin\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

