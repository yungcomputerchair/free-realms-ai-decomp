// addr: 0x014b7fd0
// name: LoginCommand_RespondToChallenge_cloneInto
// subsystem: common/networking/login_command
// source (binary assert): common/networking/login_command/LoginCommandRespondToChallenge.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RespondToChallenge_cloneInto(void * this, void *
   loginCommand) */

void __thiscall LoginCommand_RespondToChallenge_cloneInto(void *this,void *loginCommand)

{
  void *this_00;
  void *this_01;
  undefined1 auStack_8 [8];
  
                    /* Copies RespondToChallenge state into a RTTI-checked
                       LoginCommand_RespondToChallenge destination. The class is identified by RTTI
                       and LoginCommandRespondToChallenge.cpp assertion, and the body copies scalar
                       fields, a tree/map-like member, and strings. */
  this_01 = (void *)FUN_00d8d382(loginCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LoginCommand_RespondToChallenge::RTTI_Type_Descriptor,0);
  if (this_01 == (void *)0x0) {
    FUN_012f5a60("loginCommand",
                 "..\\common\\networking\\login_command\\LoginCommandRespondToChallenge.cpp",0x93);
  }
  NetworkCommand_cloneBaseFields(this_01);
  *(undefined4 *)((int)this_01 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this_01 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this_01 + 0xc) = *(undefined4 *)((int)this + 0xc);
  this_00 = (void *)((int)this_01 + 0x14);
  *(undefined4 *)((int)this_01 + 0x10) = *(undefined4 *)((int)this + 0x10);
  if (this_00 != (void *)((int)this + 0x14)) {
    LoginCommand_RbTree_eraseRange
              (this_00,auStack_8,this_00,(void *)**(undefined4 **)((int)this_01 + 0x18),this_00,
               *(undefined4 **)((int)this_01 + 0x18));
    LoginCommand_RbTree_copyAssign(this_00,(void *)((int)this + 0x14));
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0x20),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x20),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0xac),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xac),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_01 + 200)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 200),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0xe4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xe4),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0x100),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x100),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_01 + 0x11c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x11c),0,0xffffffff);
  return;
}

