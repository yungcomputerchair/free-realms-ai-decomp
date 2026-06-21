// addr: 0x015221d0
// name: UserDataCommand_RespondPlayerAvatars_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondPlayerAvatars_serialize(void * this, void *
   serializer) */

void __thiscall UserDataCommand_RespondPlayerAvatars_serialize(void *this,void *serializer)

{
                    /* Serializes UserDataCommand_RespondPlayerAvatars: calls the base serializer
                       then appends four int-vector members followed by an integer. */
  (**(code **)(*(int *)this + 8))(serializer);
  CommandArchive_serializeStringMember(this,serializer);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0xc);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x1c);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x2c);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x3c);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

