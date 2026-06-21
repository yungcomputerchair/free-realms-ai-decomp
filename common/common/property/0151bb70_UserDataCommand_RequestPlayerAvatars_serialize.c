// addr: 0x0151bb70
// name: UserDataCommand_RequestPlayerAvatars_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RequestPlayerAvatars_serialize(void * this, void *
   archive) */

void __thiscall UserDataCommand_RequestPlayerAvatars_serialize(void *this,void *archive)

{
                    /* Serializes a RequestPlayerAvatars command by serializing the base command
                       string/member and appending the integer at this+8. */
  (**(code **)(*(int *)this + 8))(archive);
  CommandArchive_serializeStringMember(this,archive);
  Serializer_appendInteger(archive,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

