// addr: 0x014e4fa0
// name: DeckCommand_PopulateOnlineDeckData_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckCommand_PopulateOnlineDeckData_serialize(void * this, void *
   serializer) */

void __thiscall DeckCommand_PopulateOnlineDeckData_serialize(void *this,void *serializer)

{
                    /* Serializes DeckCommand_PopulateOnlineDeckData: calls the base serializer then
                       appends an integer, a string/buffer member, and a second integer. */
  (**(code **)(*(int *)this + 8))(serializer);
  ArchCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x24));
  Serializer_appendString(serializer,(void *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x28));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

