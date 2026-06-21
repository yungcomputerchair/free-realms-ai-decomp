// addr: 0x014d2230
// name: GuildCommand_SetListenStatus_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandSetListenStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetListenStatus_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_SetListenStatus_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies a GuildCommand_SetListenStatus into an existing clone target after
                       base GuildCommand state is copied. The RTTI cast and clone assertion identify
                       this as the cloneInto implementation rather than object allocation. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_SetListenStatus::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandSetListenStatus.cpp",
                 0x2a);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined1 *)((int)pvVar1 + 8) = *(undefined1 *)((int)this + 8);
  return;
}

