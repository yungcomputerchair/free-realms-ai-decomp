// addr: 0x014b84b0
// name: LoginCommand_RegisterUsernameResults_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RegisterUsernameResults_serialize(void * this, void *
   stream) */

void __thiscall LoginCommand_RegisterUsernameResults_serialize(void *this,void *stream)

{
                    /* Writes register-username result debug output with the base LoginCommand
                       fields, success flag, and explanation code/string. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting LoginCommand_RegisterUsernameResults\n");
  LoginCommand_writeDebug(this,stream);
  DebugStream_writeCString(stream,"Registration Succeeded: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 4));
  DebugStream_writeCString(stream,"Explanation: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Ending LoginCommand_RegisterUsernameResults\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

