// addr: 0x01521240
// name: UserDataCommand_RespondPlayerHonors_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondPlayerHonors_serialize(void * this, void *
   serializer) */

void __thiscall UserDataCommand_RespondPlayerHonors_serialize(void *this,void *serializer)

{
                    /* Serializes UserDataCommand_RespondPlayerHonors: calls the base serializer
                       then appends one integer plus four int-vector members. */
  (**(code **)(*(int *)this + 8))(serializer);
  CommandArchive_serializeStringMember(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0xc);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x1c);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x2c);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x3c);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

