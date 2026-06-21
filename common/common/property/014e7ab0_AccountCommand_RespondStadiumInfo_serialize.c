// addr: 0x014e7ab0
// name: AccountCommand_RespondStadiumInfo_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RespondStadiumInfo_serialize(void * this, void *
   serializer) */

void __thiscall AccountCommand_RespondStadiumInfo_serialize(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes RespondStadiumInfo by writing AccountCommand base data, three
                       integer fields, and a string field. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendString(serializer,(void *)((int)this + 0x14));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

