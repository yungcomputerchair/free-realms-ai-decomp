// addr: 0x014b6bb0
// name: LoginCommand_Results_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandResults.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_Results_cloneInto(void * this, void * loginCommand) */

void __thiscall LoginCommand_Results_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  
                    /* Copies LoginCommand_Results fields into an existing NetworkCommand after
                       RTTI-checking it. Evidence is LoginCommand_Results RTTI and the
                       LoginCommandResults.cpp loginCommand assertion. */
  this_00 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_Results::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("loginCommand","..\\common\\networking\\login_command\\LoginCommandResults.cpp",
                 0x82);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined1 *)((int)this_00 + 0x14) = *(undefined1 *)((int)this + 0x14);
  *(undefined4 *)((int)this_00 + 0x18) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this_00 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_00 + 0x28),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x28),0,0xffffffff);
  FUN_005f1e5c((int)this + 4);
  return;
}

