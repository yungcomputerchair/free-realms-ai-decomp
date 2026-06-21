// addr: 0x01534b70
// name: EventCommand_serializeStringMemberAlt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_serializeStringMemberAlt(int * this, void * archive) */

void __thiscall EventCommand_serializeStringMemberAlt(void *this,void *archive)

{
                    /* Alternate duplicate of the one-string event command serializer. It wraps
                       FUN_01447510 with archive begin/end virtual callbacks. */
  (**(code **)(*(int *)this + 8))(archive);
  SerializableIntField_serialize(this,archive);
  (**(code **)(*(int *)this + 0xc))(archive);
  return;
}

