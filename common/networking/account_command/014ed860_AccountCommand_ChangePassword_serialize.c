// addr: 0x014ed860
// name: AccountCommand_ChangePassword_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_ChangePassword_serialize(int * this, int serializer) */

void __thiscall AccountCommand_ChangePassword_serialize(void *this,int serializer)

{
  int serializer_00;
  
                    /* Serializes AccountCommand_ChangePassword by emitting AccountCommand base
                       fields and a string field at this+2. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString((void *)serializer,"Starting AccountCommand_ChangePassword\n");
  AccountCommand_serialize(this,(int *)serializer,serializer_00);
  Serializer_appendString((void *)serializer,(void *)((int)this + 8));
  DebugStream_writeCString((void *)serializer,"Ending AccountCommand_ChangePassword\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

