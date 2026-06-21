// addr: 0x014d1fb0
// name: GuildCommand_SetMOTD_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandSetMOTD.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_SetMOTD_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_SetMOTD_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies GuildCommand_SetMOTD into an existing clone target, including its MOTD
                       string, after base GuildCommand state. RTTI and GuildCommandSetMOTD.cpp clone
                       assertion identify this clone-copy method. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_SetMOTD::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandSetMOTD.cpp",0x40);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)((int)this + 8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)pvVar1 + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xc),0,0xffffffff);
  *(undefined1 *)((int)pvVar1 + 0x28) = *(undefined1 *)((int)this + 0x28);
  return;
}

