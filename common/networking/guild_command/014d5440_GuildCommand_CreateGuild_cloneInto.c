// addr: 0x014d5440
// name: GuildCommand_CreateGuild_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandCreateGuild.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_CreateGuild_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_CreateGuild_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies GuildCommand_CreateGuild into an existing clone target by assigning
                       its string member after base GuildCommand state. RTTI and
                       GuildCommandCreateGuild.cpp clone assertion identify this method. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_CreateGuild::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandCreateGuild.cpp",0x2a);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)pvVar1 + 8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 8),0,0xffffffff);
  return;
}

