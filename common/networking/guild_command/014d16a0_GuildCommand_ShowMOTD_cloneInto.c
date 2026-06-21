// addr: 0x014d16a0
// name: GuildCommand_ShowMOTD_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandShowMOTD.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_ShowMOTD_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_ShowMOTD_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies GuildCommand_ShowMOTD into an existing clone target, including
                       std::string members, after base GuildCommand state. RTTI and the
                       GuildCommandShowMOTD.cpp clone assertion identify the method. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_ShowMOTD::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandShowMOTD.cpp",0x4f);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)((int)this + 8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)pvVar1 + 0x30)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 0x30),0,0xffffffff);
  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)pvVar1 + 0x14)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 0x14),0,0xffffffff);
  *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined1 *)((int)pvVar1 + 0x4c) = *(undefined1 *)((int)this + 0x4c);
  return;
}

