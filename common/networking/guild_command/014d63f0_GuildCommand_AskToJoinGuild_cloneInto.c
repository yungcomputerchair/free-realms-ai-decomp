// addr: 0x014d63f0
// name: GuildCommand_AskToJoinGuild_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandAskToJoinGuild.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_AskToJoinGuild_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_AskToJoinGuild_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies GuildCommand_AskToJoinGuild fields into an existing clone target after
                       base GuildCommand state. The method is identified by RTTI and the
                       GuildCommandAskToJoinGuild.cpp clone assertion. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_AskToJoinGuild::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandAskToJoinGuild.cpp",
                 0x54);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

