// addr: 0x014b8cf0
// name: LoginCommand_GetChallenge_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_GetChallenge_serialize(void * this, void * stream) */

void __thiscall LoginCommand_GetChallenge_serialize(void *this,void *stream)

{
                    /* Writes LoginCommand_GetChallenge debug output including base login command
                       fields and the login-name string. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting LoginCommand_GetChallenge\n");
  LoginCommand_writeDebug(this,stream);
  DebugStream_writeCString(stream,"Login name: ");
  Serializer_appendString(stream,(void *)((int)this + 4));
  DebugStream_writeCString(stream,"Ending LoginCommand_GetChallenge\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

