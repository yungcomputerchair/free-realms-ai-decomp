// addr: 0x013c1550
// name: LoginCommand_RegisterUsername_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RegisterUsername_dump(void * this, void * debugStream) */

void __thiscall LoginCommand_RegisterUsername_dump(void *this,void *debugStream)

{
                    /* Dumps LoginCommand_RegisterUsername after the base LoginCommand debug output,
                       serializing two strings and two boolean/integer fields. Evidence is the
                       'Starting/Ending LoginCommand_RegisterUsername' strings. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting LoginCommand_RegisterUsername\n");
  LoginCommand_writeDebug(this,debugStream);
  Serializer_appendString(debugStream,(void *)((int)this + 4));
  Serializer_appendString(debugStream,(void *)((int)this + 0x20));
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x3c));
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x3d));
  DebugStream_writeCString(debugStream,"Ending LoginCommand_RegisterUsername\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

