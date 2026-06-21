// addr: 0x014b6290
// name: LoginCommand_SendChallenge_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandSendChallenge.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_SendChallenge_cloneInto(void * this, void * loginCommand) */

void __thiscall LoginCommand_SendChallenge_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  
                    /* Copies the SendChallenge string into an existing NetworkCommand after casting
                       it to LoginCommand_SendChallenge. The RTTI descriptor and
                       LoginCommandSendChallenge.cpp assertion provide the class evidence. */
  this_00 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_SendChallenge::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("loginCommand",
                 "..\\common\\networking\\login_command\\LoginCommandSendChallenge.cpp",0xb5);
  }
  NetworkCommand_cloneBaseFields(this_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_00 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  return;
}

