// addr: 0x014b8b70
// name: LoginCommand_GuestLogin_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandGuestLogin.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_GuestLogin_cloneInto(void * this, void * loginCommand) */

void __thiscall LoginCommand_GuestLogin_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  void *this_01;
  undefined1 auStack_8 [8];
  
                    /* Copies a GuestLogin command into a RTTI-checked LoginCommand_GuestLogin
                       destination, including a tree/map-like member and string. Evidence is
                       GuestLogin RTTI and source file assert. */
  this_01 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_GuestLogin::RTTI_Type_Descriptor,0);
  if (this_01 == (void *)0x0) {
    FUN_012f5a60("loginCommand","..\\common\\networking\\login_command\\LoginCommandGuestLogin.cpp",
                 0x4e);
  }
  NetworkCommand_cloneBaseFields(this_01);
  this_00 = (void *)((int)this_01 + 4);
  if (this_00 != (void *)((int)this + 4)) {
    LoginCommand_RbTree_eraseRange
              (this_00,auStack_8,this_00,(void *)**(undefined4 **)((int)this_01 + 8),this_00,
               *(undefined4 **)((int)this_01 + 8));
    LoginCommand_RbTree_copyAssign(this_00,(void *)((int)this + 4));
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0x10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x10),0,0xffffffff);
  return;
}

