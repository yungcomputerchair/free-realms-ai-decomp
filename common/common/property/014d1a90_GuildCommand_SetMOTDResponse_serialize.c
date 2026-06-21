// addr: 0x014d1a90
// name: GuildCommand_SetMOTDResponse_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetMOTDResponse_serialize(void * this, void * serializer) */

void __thiscall GuildCommand_SetMOTDResponse_serialize(void *this,void *serializer)

{
                    /* Serializes two integer fields after invoking the command framing/base
                       serialization helpers. The body opens through vtable slot 8, calls the shared
                       GuildCommand serializer helper, appends param_1[2] and param_1[3], then
                       closes through vtable slot 0xc. */
  (**(code **)(*(int *)this + 8))(serializer);
  GuildCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

