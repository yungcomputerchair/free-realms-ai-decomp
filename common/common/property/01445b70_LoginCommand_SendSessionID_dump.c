// addr: 0x01445b70
// name: LoginCommand_SendSessionID_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_SendSessionID_dump(void * this, void * debugStream) */

void __thiscall LoginCommand_SendSessionID_dump(void *this,void *debugStream)

{
  void *map;
  
                    /* Writes the LoginCommand_SendSessionID payload after base LoginCommand output:
                       session/string field, version/type map, several strings, and a boolean flag.
                       Evidence is the neighboring LoginCommand_SendSessionID_ctor/factory and
                       matching reduced field layout. */
  map = debugStream;
  (**(code **)(*(int *)this + 8))();
  LoginCommand_writeDebug(this,debugStream);
  Serializer_appendString(debugStream,(void *)((int)this + 4));
  Property_serializeDwordPairMap(&stack0x00000000,(void *)((int)this + 0x20),map);
  Serializer_appendString(debugStream,(void *)((int)this + 0x2c));
  Serializer_appendString(debugStream,(void *)((int)this + 0x48));
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 100));
  Serializer_appendString(debugStream,(void *)((int)this + 0x68));
  Serializer_appendString(debugStream,(void *)((int)this + 0x84));
  Serializer_appendString(debugStream,(void *)((int)this + 0xa0));
  Serializer_appendString(debugStream,(void *)((int)this + 0xbc));
  Serializer_appendString(debugStream,(void *)((int)this + 0xd8));
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

