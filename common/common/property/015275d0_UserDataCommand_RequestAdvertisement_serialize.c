// addr: 0x015275d0
// name: UserDataCommand_RequestAdvertisement_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RequestAdvertisement_serialize(void * this, void *
   serializer) */

void __thiscall UserDataCommand_RequestAdvertisement_serialize(void *this,void *serializer)

{
                    /* Serializes RequestAdvertisement by writing the UserData command string/member
                       data and one integer field. */
  (**(code **)(*(int *)this + 8))(serializer);
  CommandArchive_serializeStringMember(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

