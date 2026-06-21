// addr: 0x01521ae0
// name: UserDataCommand_RespondPlayerAwards_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondPlayerAwards_serialize(void * this, void *
   serializer) */

void __thiscall UserDataCommand_RespondPlayerAwards_serialize(void *this,void *serializer)

{
                    /* Serializes UserDataCommand_RespondPlayerAwards: calls the base serializer
                       then appends an int-vector member followed by an integer. */
  (**(code **)(*(int *)this + 8))(serializer);
  CommandArchive_serializeStringMember(this,serializer);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0xc);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

