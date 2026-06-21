// addr: 0x01522a00
// name: UserDataCommand_RespondDBHonors_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondDBHonors_serialize(int * this, void * stream) */

void __thiscall UserDataCommand_RespondDBHonors_serialize(void *this,void *stream)

{
                    /* Serializes UserDataCommand_RespondDBHonors fields after the UserDataCommand
                       base: an id vector, three string vectors, and a language/status scalar. */
  (**(code **)(*(int *)this + 8))(stream);
  CommandArchive_serializeStringMember(this,stream);
  STLVector_int_serialize(&stack0xfffffff8,(int)this + 0xc);
  STLVector_string_serialize((int)this + 0x1c);
  STLVector_string_serialize((int)this + 0x2c);
  STLVector_string_serialize((int)this + 0x3c);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

