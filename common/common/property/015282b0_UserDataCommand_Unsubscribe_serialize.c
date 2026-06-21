// addr: 0x015282b0
// name: UserDataCommand_Unsubscribe_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_Unsubscribe_serialize(void * this, void * archive) */

void __thiscall UserDataCommand_Unsubscribe_serialize(void *this,void *archive)

{
                    /* Serializes an Unsubscribe command by serializing the base command
                       string/member and appending two integer fields at this+8 and this+12. */
  (**(code **)(*(int *)this + 8))(archive);
  CommandArchive_serializeStringMember(this,archive);
  Serializer_appendInteger(archive,*(uint *)((int)this + 8));
  Serializer_appendInteger(archive,*(uint *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

