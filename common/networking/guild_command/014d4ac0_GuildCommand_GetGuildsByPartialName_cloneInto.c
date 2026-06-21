// addr: 0x014d4ac0
// name: GuildCommand_GetGuildsByPartialName_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandGetGuildsByPartialName.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_GetGuildsByPartialName_cloneInto(void * param_1, void *
   param_2) */

void __thiscall
GuildCommand_GetGuildsByPartialName_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies GuildCommand_GetGuildsByPartialName state into an existing clone
                       target, including string/vector-like members. The RTTI class and
                       GuildCommandGetGuildsByPartialName.cpp clone assertion identify the
                       clone-copy role. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_GetGuildsByPartialName::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\guild_command\\GuildCommandGetGuildsByPartialName.cpp",
                 0x48);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined4 *)((int)pvVar1 + 0x44) = *(undefined4 *)((int)this + 0x44);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)pvVar1 + 0x28)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 0x28),0,0xffffffff);
  FUN_005f1e5c((int)this + 8);
  StdVector28_assign((int)this + 0x18);
  return;
}

