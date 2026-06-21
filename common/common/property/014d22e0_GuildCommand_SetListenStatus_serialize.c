// addr: 0x014d22e0
// name: GuildCommand_SetListenStatus_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetListenStatus_serialize(void * this, void * serializer) */

void __thiscall GuildCommand_SetListenStatus_serialize(void *this,void *serializer)

{
                    /* Serializes one byte status field after invoking the command framing/base
                       serialization helpers. The body opens through vtable slot 8, calls the shared
                       GuildCommand serializer helper, appends (char)param_1[2], then closes through
                       vtable slot 0xc. */
  (**(code **)(*(int *)this + 8))(serializer);
  GuildCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 8));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

