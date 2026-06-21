// addr: 0x014b99b0
// name: LoginCommand_ForgotPassword_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandForgotPassword.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_ForgotPassword_cloneInto(void * this, void * loginCommand)
    */

void __thiscall LoginCommand_ForgotPassword_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  
                    /* Copies the ForgotPassword string field into an existing NetworkCommand after
                       RTTI-checking the destination. Evidence is the ForgotPassword RTTI and source
                       file assert. */
  this_00 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_ForgotPassword::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("loginCommand",
                 "..\\common\\networking\\login_command\\LoginCommandForgotPassword.cpp",0x33);
  }
  NetworkCommand_cloneBaseFields(this_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_00 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  return;
}

