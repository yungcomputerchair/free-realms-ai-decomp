// addr: 0x014e8b10
// name: AccountCommand_RequestStadiumInfo_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RequestStadiumInfo_serialize(void * this, void *
   serializer) */

void __thiscall AccountCommand_RequestStadiumInfo_serialize(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes a RequestStadiumInfo account command by bracketing the base
                       AccountCommand serialization and appending the command-specific integer
                       field. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

