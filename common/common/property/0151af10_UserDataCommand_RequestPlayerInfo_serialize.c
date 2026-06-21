// addr: 0x0151af10
// name: UserDataCommand_RequestPlayerInfo_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RequestPlayerInfo_serialize(void * this, void * archive)
    */

void __thiscall UserDataCommand_RequestPlayerInfo_serialize(void *this,void *archive)

{
                    /* Serializes a RequestPlayerInfo command by serializing the base command
                       string/member and writing the integer at this+8. */
  (**(code **)(*(int *)this + 8))(archive);
  CommandArchive_serializeStringMember(this,archive);
  Serializer_appendInteger(archive,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

