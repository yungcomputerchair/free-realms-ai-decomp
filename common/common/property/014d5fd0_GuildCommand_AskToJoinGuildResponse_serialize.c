// addr: 0x014d5fd0
// name: GuildCommand_AskToJoinGuildResponse_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_AskToJoinGuildResponse_serialize(void * this, void *
   serializer) */

void __thiscall GuildCommand_AskToJoinGuildResponse_serialize(void *this,void *serializer)

{
                    /* Serializes integer, boolean, and integer fields after invoking the command
                       framing/base serialization helpers. The body opens through vtable slot 8,
                       calls the shared GuildCommand serializer helper, appends param_1[2],
                       (char)param_1[4], and param_1[3], then closes through vtable slot 0xc. */
  (**(code **)(*(int *)this + 8))(serializer);
  GuildCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

