// addr: 0x014d19c0
// name: GuildCommand_SetMOTDResponse_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandSetMOTDResponse.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetMOTDResponse_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_SetMOTDResponse_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies a GuildCommand_SetMOTDResponse into an existing clone target after
                       base GuildCommand state is copied. The RTTI cast to
                       GuildCommand_SetMOTDResponse and the clone assertion in
                       GuildCommandSetMOTDResponse.cpp identify the class and clone-copy role. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_SetMOTDResponse::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandSetMOTDResponse.cpp",
                 0x35);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

