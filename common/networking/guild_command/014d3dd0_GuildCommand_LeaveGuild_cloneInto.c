// addr: 0x014d3dd0
// name: GuildCommand_LeaveGuild_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandLeaveGuild.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_LeaveGuild_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_LeaveGuild_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies a GuildCommand_LeaveGuild into an existing clone target after base
                       GuildCommand state. The RTTI class and GuildCommandLeaveGuild.cpp clone
                       assertion provide direct evidence. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_LeaveGuild::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandLeaveGuild.cpp",0x2b);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

