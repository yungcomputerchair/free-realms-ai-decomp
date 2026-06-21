// addr: 0x014f2190
// name: NetworkCommand_PendingSessionKick_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_PendingSessionKick_serialize(void * this, void *
   serializer) */

void __thiscall NetworkCommand_PendingSessionKick_serialize(void *this,void *serializer)

{
                    /* Serializes PendingSessionKick by writing the base NetworkCommand payload
                       followed by two integer fields. */
  (**(code **)(*(int *)this + 8))(serializer);
  NetworkCommand_dump(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

