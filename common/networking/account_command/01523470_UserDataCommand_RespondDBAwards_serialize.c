// addr: 0x01523470
// name: UserDataCommand_RespondDBAwards_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondDBAwards_serialize(int * this, void * stream) */

void __thiscall UserDataCommand_RespondDBAwards_serialize(void *this,void *stream)

{
                    /* Serializes UserDataCommand_RespondDBAwards fields: award ids,
                       icon/title/description string vectors, and a scalar after the base
                       UserDataCommand data. */
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

