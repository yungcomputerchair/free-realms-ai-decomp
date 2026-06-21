// addr: 0x01441480
// name: UChatCommand_RequestAddFriendReciprocate_cloneInto
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandRequestAddFriendReciprocate.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestAddFriendReciprocate_cloneInto(void * this, void *
   uchatCommand) */

void __thiscall UChatCommand_RequestAddFriendReciprocate_cloneInto(void *this,void *uchatCommand)

{
  void *uchatCommand_00;
  
                    /* Copies an add-friend-reciprocate request into an existing destination,
                       including three strings and a trailing byte flag. */
  uchatCommand_00 =
       (void *)FUN_00d8d382(uchatCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &UChatCommand_RequestAddFriendReciprocate::RTTI_Type_Descriptor,0);
  if (uchatCommand_00 == (void *)0x0) {
    FUN_012f5a60("uchatCommand",
                 "..\\common\\networking\\uchat_command\\UChatCommandRequestAddFriendReciprocate.cpp"
                 ,0x5b);
  }
  UChatCommand_cloneInto(this,uchatCommand_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)uchatCommand_00 + 0x44),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x44),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)uchatCommand_00 + 0x60),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x60),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)uchatCommand_00 + 0x7c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x7c),0,0xffffffff);
  *(undefined1 *)((int)uchatCommand_00 + 0x98) = *(undefined1 *)((int)this + 0x98);
  return;
}

