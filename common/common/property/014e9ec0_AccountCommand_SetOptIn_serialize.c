// addr: 0x014e9ec0
// name: AccountCommand_SetOptIn_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetOptIn_serialize(void * this, void * serializer) */

void __thiscall AccountCommand_SetOptIn_serialize(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes SetOptIn by writing the base AccountCommand payload followed by
                       two byte-sized flags and an integer field. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 8));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 9));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

