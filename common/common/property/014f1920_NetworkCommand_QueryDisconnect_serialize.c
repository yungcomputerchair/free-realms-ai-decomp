// addr: 0x014f1920
// name: NetworkCommand_QueryDisconnect_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_QueryDisconnect_serialize(void * this, void * serializer)
    */

void __thiscall NetworkCommand_QueryDisconnect_serialize(void *this,void *serializer)

{
                    /* Serializes QueryDisconnect by writing the base NetworkCommand payload
                       followed by one integer field. */
  (**(code **)(*(int *)this + 8))(serializer);
  NetworkCommand_dump(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

