// addr: 0x014d5b50
// name: GuildCommand_Chat_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandChat.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Chat_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_Chat_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *unaff_EDI;
  
                    /* Copies GuildCommand_Chat into an existing clone target, including scalar
                       fields and three std::string members. RTTI and GuildCommandChat.cpp clone
                       assertion identify the method. */
  pvVar1 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_Chat::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandChat.cpp",0x85);
  }
  GuildCommand_cloneInto(this,pvVar1,unaff_EDI);
  *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)pvVar1 + 0x14) = *(undefined4 *)((int)this + 0x14);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)pvVar1 + 0x18)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 0x18),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)pvVar1 + 0x34)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 0x34),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)pvVar1 + 0x50)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 0x50),0,0xffffffff);
  *(undefined1 *)((int)pvVar1 + 0x6c) = *(undefined1 *)((int)this + 0x6c);
  return;
}

