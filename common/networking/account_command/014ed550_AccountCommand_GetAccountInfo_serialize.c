// addr: 0x014ed550
// name: AccountCommand_GetAccountInfo_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_GetAccountInfo_serialize(int * this, int serializer) */

void __thiscall AccountCommand_GetAccountInfo_serialize(void *this,int serializer)

{
  int *piVar1;
  bool bVar2;
  int serializer_00;
  
                    /* Serializes AccountCommand_GetAccountInfo, including an optional Properties
                       object and Group ID. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString((void *)serializer,"Starting AccountCommand_GetAccountInfo\n");
  AccountCommand_serialize(this,(int *)serializer,serializer_00);
  DebugStream_writeCString((void *)serializer,"Properties: ");
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger((void *)serializer,1);
  }
  else {
    bVar2 = Serializer_appendInteger((void *)serializer,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(serializer);
    }
  }
  DebugStream_writeCString((void *)serializer,"Group ID: ");
  Serializer_appendInteger((void *)serializer,*(uint *)((int)this + 0xc));
  DebugStream_writeCString((void *)serializer,"Ending AccountCommand_GetAccountInfo\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

