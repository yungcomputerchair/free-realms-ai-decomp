// addr: 0x01434ca0
// name: ValidAttrModFilter_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidAttrModFilter_dump(void * this, void * debugStream) */

void __thiscall ValidAttrModFilter_dump(void *this,void *debugStream)

{
  uint uVar1;
  
                    /* Dumps ValidAttrModFilter with key, filtered cards, parent card id, and
                       dynamic card id. Evidence is 'Starting/Ending ValidAttrModFilter' and field
                       labels. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting ValidAttrModFilter\n");
  PlayElement_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"Key: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x40));
  DebugStream_writeCString(debugStream,"Filtered Cards: ");
  (**(code **)(*(int *)((int)this + 0x44) + 0x28))(debugStream);
  DebugStream_writeCString(debugStream,"Parent Card: ");
  if (*(int *)((int)this + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(debugStream,uVar1);
  DebugStream_writeCString(debugStream,"DynCard: ");
  if (*(int *)((int)this + 0x54) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(debugStream,uVar1);
  DebugStream_writeCString(debugStream,"Ending ValidAttrModFilter\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

