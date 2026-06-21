// addr: 0x0152f500
// name: EventCommand_serializeStringMember
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_serializeStringMember(int * this, void * archive) */

void __thiscall EventCommand_serializeStringMember(void *this,void *archive)

{
                    /* Serializes one string-like member for an event command/archive object. It
                       calls virtual begin/end callbacks around FUN_01447510, which writes a string
                       field. */
  (**(code **)(*(int *)this + 8))(archive);
  SerializableIntField_serialize(this,archive);
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

