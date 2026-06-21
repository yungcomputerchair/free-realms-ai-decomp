// addr: 0x014458f0
// name: LoginCommand_SendPassword_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandSendPassword.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_SendPassword_cloneInto(void * this, void * loginCommand) */

void __thiscall LoginCommand_SendPassword_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  void *this_01;
  undefined1 auStack_8 [8];
  
                    /* Copies the SendPassword command into a RTTI-checked LoginCommand_SendPassword
                       destination, including many string fields and a tree/map-like member. The
                       RTTI descriptor and LoginCommandSendPassword.cpp assertion identify the
                       class. */
  this_01 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_SendPassword::RTTI_Type_Descriptor,0);
  if (this_01 == (void *)0x0) {
    FUN_012f5a60("loginCommand",
                 "..\\common\\networking\\login_command\\LoginCommandSendPassword.cpp",0x8d);
  }
  NetworkCommand_cloneBaseFields(this_01);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_01 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0x20),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x20),0,0xffffffff);
  this_00 = (void *)((int)this_01 + 0x3c);
  if (this_00 != (void *)((int)this + 0x3c)) {
    LoginCommand_RbTree_eraseRange
              (this_00,auStack_8,this_00,(void *)**(undefined4 **)((int)this_01 + 0x40),this_00,
               *(undefined4 **)((int)this_01 + 0x40));
    LoginCommand_RbTree_copyAssign(this_00,(void *)((int)this + 0x3c));
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0x48),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x48),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_01 + 100)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 100),0,0xffffffff);
  *(undefined1 *)((int)this_01 + 0x80) = *(undefined1 *)((int)this + 0x80);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0x84),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x84),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0xa0),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xa0),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0xbc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xbc),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0xd8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xd8),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0xf4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xf4),0,0xffffffff);
  return;
}

