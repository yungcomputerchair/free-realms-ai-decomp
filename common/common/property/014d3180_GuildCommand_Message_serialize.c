// addr: 0x014d3180
// name: GuildCommand_Message_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Message_serialize(void * this, void * stream) */

void __thiscall GuildCommand_Message_serialize(void *this,void *stream)

{
  int *piVar1;
  bool bVar2;
  
                    /* Serializes a guild message command: base GuildCommand fields, message
                       metadata, and two nullable object pointers serialized through their virtual
                       writer. */
  (**(code **)(*(int *)this + 8))(stream);
  GuildCommand_serialize(this,stream);
  DebugStream_writeCString(stream,"Message ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0xc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  piVar1 = *(int **)((int)this + 0x14);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(stream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(stream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(stream);
    }
  }
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(stream,1);
    (**(code **)(*(int *)this + 0xc))(stream);
    return;
  }
  bVar2 = Serializer_appendInteger(stream,0);
  if (bVar2) {
    (**(code **)(*piVar1 + 0x28))(stream);
  }
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

