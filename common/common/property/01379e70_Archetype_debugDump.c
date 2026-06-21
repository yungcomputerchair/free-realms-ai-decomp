// addr: 0x01379e70
// name: Archetype_debugDump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Archetype_debugDump(void * this, void * stream) */

void __thiscall Archetype_debugDump(void *this,void *stream)

{
  int *piVar1;
  bool bVar2;
  void *stream_00;
  
                    /* Writes a readable debug dump for an Archetype, including IDs, card display
                       style, format-specific data, and foil flags. The literal labels explicitly
                       name the dumped object as Archetype. */
  if (stream == (void *)0x0) {
    stream_00 = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream_00 = (void *)(**(code **)(*(int *)this + 8))(stream);
  }
  DebugStream_writeCString(stream_00,"Starting Archetype\n");
  DebugStream_writeCString(stream_00,"Archetype ID: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream_00,"Defining Archetype ID: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0x18));
  DebugStream_writeCString(stream_00,"Card Display Style: ");
  Serializer_appendInteger(stream_00,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(stream_00,"Format specific data: ");
  piVar1 = *(int **)((int)this + 0x10);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(stream_00,1);
  }
  else {
    bVar2 = Serializer_appendInteger(stream_00,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(stream_00);
    }
  }
  DebugStream_writeCString(stream_00,"No Foil.");
  Serializer_appendInteger(stream_00,(uint)*(byte *)((int)this + 0x24));
  DebugStream_writeCString(stream_00,"Only Foil. ");
  Serializer_appendInteger(stream_00,(uint)*(byte *)((int)this + 0x25));
  DebugStream_writeCString(stream_00,"Ending Archetype\n");
  (**(code **)(*(int *)this + 0xc))(stream_00);
  return;
}

