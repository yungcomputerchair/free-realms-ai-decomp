// addr: 0x014b96e0
// name: LoginCommand_ForgotPassword_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_ForgotPassword_serialize(void * this, void * stream) */

void __thiscall LoginCommand_ForgotPassword_serialize(void *this,void *stream)

{
                    /* Writes LoginCommand_ForgotPassword debug output with base login command data
                       and one string member. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting LoginCommand_ForgotPassword\n");
  LoginCommand_writeDebug(this,stream);
  Serializer_appendString(stream,(void *)((int)this + 4));
  DebugStream_writeCString(stream,"Ending LoginCommand_ForgotPassword\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

