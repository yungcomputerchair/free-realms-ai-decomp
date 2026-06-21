// addr: 0x014b9430
// name: LoginCommand_ForgotPasswordResults_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_ForgotPasswordResults_serialize(void * this, void * stream)
    */

void __thiscall LoginCommand_ForgotPasswordResults_serialize(void *this,void *stream)

{
                    /* Writes forgot-password result debug output with base login command data,
                       reset success flag, and explanation value. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting LoginCommand_ForgotPasswordResults\n");
  LoginCommand_writeDebug(this,stream);
  DebugStream_writeCString(stream,"Reset Succeeded: ");
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 4));
  DebugStream_writeCString(stream,"Explanation: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Ending LoginCommand_ForgotPasswordResults\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

