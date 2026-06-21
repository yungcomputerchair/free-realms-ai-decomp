// addr: 0x014ec210
// name: AccountCommand_IntroduceAccount_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_IntroduceAccount_dump(int * this, void * stream) */

void __thiscall AccountCommand_IntroduceAccount_dump(void *this,void *stream)

{
  int *piVar1;
  bool bVar2;
  void *serializer;
  
                    /* Dumps AccountCommand_IntroduceAccount with account name, optional property
                       set, gender, and character id after the base AccountCommand data. */
  serializer = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting AccountCommand_IntroduceAccount\n");
  AccountCommand_serialize(this,stream,(int)serializer);
  DebugStream_writeCString(stream,"AccountName: ");
  Serializer_appendString(stream,(void *)((int)this + 8));
  DebugStream_writeCString(stream,"Properties: ");
  piVar1 = *(int **)((int)this + 0x44);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(stream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(stream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(stream);
    }
  }
  DebugStream_writeCString(stream,"AccountGender: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x40));
  DebugStream_writeCString(stream,"CharacterID: ");
  Serializer_appendString(stream,(void *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending AccountCommand_IntroduceAccount\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

