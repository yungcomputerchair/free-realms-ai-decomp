// addr: 0x014d4f50
// name: GuildCommand_EndGuilds_deserialize
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuildCommand_EndGuilds_deserialize(void * param_1, void * param_2) */

int __thiscall GuildCommand_EndGuilds_deserialize(void *this,void *param_1,void *param_2)

{
  void *deserializer;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  int iVar2;
  
                    /* Deserializes GuildCommand_EndGuilds by chaining the base
                       NetworkCommand/GuildCommand read helpers and then finalizing the stream read.
                       The identity is inferred from adjacent EndGuilds clone/serialize siblings. */
  deserializer = param_1;
  (**(code **)(*(int *)this + 0x10))(param_1,&param_1);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = GuildCommand_deserialize(this,deserializer);
    uVar3 = extraout_var_00;
    if (bVar1) {
      iVar2 = (**(code **)(*(int *)this + 0x14))(deserializer);
      return iVar2;
    }
  }
  return (uint)uVar3 << 8;
}

