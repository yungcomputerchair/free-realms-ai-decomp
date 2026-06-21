// addr: 0x01440970
// name: UChatCommand_RequestRemoveIgnore_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestRemoveIgnore_serialize(void * this, void *
   serializer) */

void __thiscall UChatCommand_RequestRemoveIgnore_serialize(void *this,void *serializer)

{
                    /* Serializes a remove-ignore chat command by serializing its base data and two
                       string-like members at offsets 0x44 and 0x60. */
  (**(code **)(*(int *)this + 8))(serializer);
  UChatCommand_dump(this,serializer);
  Serializer_appendString(serializer,(void *)((int)this + 0x44));
  Serializer_appendString(serializer,(void *)((int)this + 0x60));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

