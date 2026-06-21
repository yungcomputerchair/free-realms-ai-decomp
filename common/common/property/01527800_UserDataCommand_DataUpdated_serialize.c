// addr: 0x01527800
// name: UserDataCommand_DataUpdated_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_DataUpdated_serialize(void * this, void * serializer) */

void __thiscall UserDataCommand_DataUpdated_serialize(void *this,void *serializer)

{
                    /* Serializes DataUpdated by writing base UserData command data, two integer
                       fields, and the int-to-Serializable-pointer diff map. */
  (**(code **)(*(int *)this + 8))(serializer);
  CommandArchive_serializeStringMember(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x18));
  STLMap_intToSerializablePointer_serialize(&stack0x00000000,(int)this + 8);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

