// addr: 0x014d2a90
// name: GuildCommand_Remove_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandRemove.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Remove_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_Remove_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies a GuildCommand_Remove into an existing clone target after the base
                       GuildCommand copy. The class is identified by authoritative RTTI and the
                       GuildCommandRemove.cpp clone assertion. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_Remove::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandRemove.cpp",0x36);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

