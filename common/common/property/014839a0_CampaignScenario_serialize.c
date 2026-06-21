// addr: 0x014839a0
// name: CampaignScenario_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CampaignScenario_serialize(void * this, void * stream) */

void __thiscall CampaignScenario_serialize(void *this,void *stream)

{
  void *stream_00;
  
                    /* Serializes/debug-writes a CampaignScenario with multiple integer, string, and
                       boolean fields between start/end markers. */
  stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream_00,"Starting CampaignScenario\n");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 4));
  Serializer_appendString(stream_00,(void *)((int)this + 0xc));
  Serializer_appendString(stream_00,(void *)((int)this + 0x28));
  Serializer_appendString(stream_00,(void *)((int)this + 0x44));
  Serializer_appendString(stream_00,(void *)((int)this + 0x7c));
  Serializer_appendString(stream_00,(void *)((int)this + 0x60));
  Serializer_appendInteger(stream_00,(uint)*(byte *)((int)this + 0xb4));
  Serializer_appendInteger(stream_00,(uint)*(byte *)((int)this + 0xb5));
  Serializer_appendInteger(stream_00,(uint)*(byte *)((int)this + 0xb6));
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0xb8));
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream_00,(uint)*(byte *)((int)this + 0xbd));
  Serializer_appendInteger(stream_00,(uint)*(byte *)((int)this + 0xbc));
  Serializer_appendString(stream_00,(void *)((int)this + 0x98));
  DebugStream_writeCString(stream_00,"Ending CampaignScenario\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

