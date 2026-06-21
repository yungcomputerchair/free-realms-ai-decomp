// addr: 0x014d5170
// name: GuildCommand_CreateGuild_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_CreateGuild_serialize(void * this, void * serializer) */

void __thiscall GuildCommand_CreateGuild_serialize(void *this,void *serializer)

{
                    /* Serializes a string-like member at offset 8 after invoking the command
                       framing/base serialization helpers. The body opens through vtable slot 8,
                       calls the shared GuildCommand serializer helper, appends param_1 + 2 via
                       string serializer FUN_013c2860, then closes through vtable slot 0xc. */
  (**(code **)(*(int *)this + 8))(serializer);
  GuildCommand_serialize(this,serializer);
  Serializer_appendString(serializer,(void *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

