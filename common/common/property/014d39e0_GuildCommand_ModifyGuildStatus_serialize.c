// addr: 0x014d39e0
// name: GuildCommand_ModifyGuildStatus_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_ModifyGuildStatus_serialize(void * this, void * serializer)
    */

void __thiscall GuildCommand_ModifyGuildStatus_serialize(void *this,void *serializer)

{
                    /* Serializes three integer fields after invoking the command framing/base
                       serialization helpers. The body opens through vtable slot 8, calls the shared
                       GuildCommand serializer helper, appends param_1[2], param_1[3], and
                       param_1[4], then closes through vtable slot 0xc. */
  (**(code **)(*(int *)this + 8))(serializer);
  GuildCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

