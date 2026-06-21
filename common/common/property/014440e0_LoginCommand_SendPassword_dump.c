// addr: 0x014440e0
// name: LoginCommand_SendPassword_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_SendPassword_dump(void * this, void * debugStream) */

void __thiscall LoginCommand_SendPassword_dump(void *this,void *debugStream)

{
  void *map;
  
                    /* Writes the LoginCommand_SendPassword payload after base LoginCommand debug
                       output: two leading strings, version/type map, more strings, a flag, and
                       template/property strings. Evidence is the neighboring
                       LoginCommand_SendPassword_ctor and matching field layout. */
  map = debugStream;
  (**(code **)(*(int *)this + 8))();
  LoginCommand_writeDebug(this,debugStream);
  Serializer_appendString(debugStream,(void *)((int)this + 4));
  Serializer_appendString(debugStream,(void *)((int)this + 0x20));
  Property_serializeDwordPairMap(&stack0x00000000,(void *)((int)this + 0x3c),map);
  Serializer_appendString(debugStream,(void *)((int)this + 0x48));
  Serializer_appendString(debugStream,(void *)((int)this + 100));
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x80));
  Serializer_appendString(debugStream,(void *)((int)this + 0x84));
  Serializer_appendString(debugStream,(void *)((int)this + 0xa0));
  Serializer_appendString(debugStream,(void *)((int)this + 0xbc));
  Serializer_appendString(debugStream,(void *)((int)this + 0xd8));
  Serializer_appendString(debugStream,(void *)((int)this + 0xf4));
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

