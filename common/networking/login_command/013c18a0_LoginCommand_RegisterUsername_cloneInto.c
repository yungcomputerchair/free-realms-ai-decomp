// addr: 0x013c18a0
// name: LoginCommand_RegisterUsername_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandRegisterUsername.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RegisterUsername_cloneInto(void * this, void * loginCommand)
    */

void __thiscall LoginCommand_RegisterUsername_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  
                    /* Copies RegisterUsername payload strings and flags into a RTTI-checked
                       LoginCommand_RegisterUsername destination. The file path and RTTI identify
                       the class, and the copy shape matches cloneInto. */
  this_00 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_RegisterUsername::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("loginCommand",
                 "..\\common\\networking\\login_command\\LoginCommandRegisterUsername.cpp",0x53);
  }
  NetworkCommand_cloneBaseFields(this_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_00 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_00 + 0x20),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x20),0,0xffffffff);
  *(undefined1 *)((int)this_00 + 0x3c) = *(undefined1 *)((int)this + 0x3c);
  *(undefined1 *)((int)this_00 + 0x3d) = *(undefined1 *)((int)this + 0x3d);
  return;
}

