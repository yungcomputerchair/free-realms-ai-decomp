// addr: 0x014b9f70
// name: LoginCommand_DisplayMOTD_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandDisplayMOTD.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_DisplayMOTD_cloneInto(void * this, void * loginCommand) */

void __thiscall LoginCommand_DisplayMOTD_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  
                    /* Copies DisplayMOTD string and numeric fields into a RTTI-checked
                       LoginCommand_DisplayMOTD destination. The RTTI descriptor and
                       LoginCommandDisplayMOTD.cpp assertion identify the class. */
  this_00 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_DisplayMOTD::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("loginCommand","..\\common\\networking\\login_command\\LoginCommandDisplayMOTD.cpp"
                 ,0x43);
  }
  NetworkCommand_cloneBaseFields(this_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_00 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  *(undefined4 *)((int)this_00 + 0x20) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_00 + 0x28),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x28),0,0xffffffff);
  return;
}

