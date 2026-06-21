// addr: 0x014e77b0
// name: AccountCommand_RespondUpdateStadium_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RespondUpdateStadium_serialize(void * this, void *
   serializer) */

void __thiscall AccountCommand_RespondUpdateStadium_serialize(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes RespondUpdateStadium by writing AccountCommand base data and one
                       integer field. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

