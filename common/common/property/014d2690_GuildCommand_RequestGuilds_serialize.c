// addr: 0x014d2690
// name: GuildCommand_RequestGuilds_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_RequestGuilds_serialize(void * this, void * serializer) */

void __thiscall GuildCommand_RequestGuilds_serialize(void *this,void *serializer)

{
                    /* Serializes one integer field after invoking the command framing/base
                       serialization helpers. The body opens through vtable slot 8, calls the shared
                       GuildCommand serializer helper, appends param_1[2], then closes through
                       vtable slot 0xc. */
  (**(code **)(*(int *)this + 8))(serializer);
  GuildCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

