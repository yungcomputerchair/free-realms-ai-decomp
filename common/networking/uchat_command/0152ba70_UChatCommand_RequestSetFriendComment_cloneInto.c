// addr: 0x0152ba70
// name: UChatCommand_RequestSetFriendComment_cloneInto
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandRequestSetFriendComment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestSetFriendComment_cloneInto(void * this, void *
   uchatCommand) */

void __thiscall UChatCommand_RequestSetFriendComment_cloneInto(void *this,void *uchatCommand)

{
  void *uchatCommand_00;
  
                    /* Copies a set-friend-comment request into an existing destination, including
                       three derived string fields at 0x44, 0x60, and 0x7c. */
  uchatCommand_00 =
       (void *)FUN_00d8d382(uchatCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &UChatCommand_RequestSetFriendComment::RTTI_Type_Descriptor,0);
  if (uchatCommand_00 == (void *)0x0) {
    FUN_012f5a60("uchatCommand",
                 "..\\common\\networking\\uchat_command\\UChatCommandRequestSetFriendComment.cpp",
                 0x51);
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
  return;
}

