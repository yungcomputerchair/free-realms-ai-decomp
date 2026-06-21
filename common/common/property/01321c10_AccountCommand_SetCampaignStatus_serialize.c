// addr: 0x01321c10
// name: AccountCommand_SetCampaignStatus_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetCampaignStatus_serialize(void * this, void * stream) */

void __thiscall AccountCommand_SetCampaignStatus_serialize(void *this,void *stream)

{
  void *serializer;
  
                    /* Serializes the base AccountCommand fields and then writes four integer/status
                       fields from offsets 8 through 0x14 before ending the stream section. The
                       vtable prologue/epilogue and AccountCommand_serialize call identify it as a
                       command serializer. */
  serializer = stream;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,stream,(int)serializer);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x14));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

