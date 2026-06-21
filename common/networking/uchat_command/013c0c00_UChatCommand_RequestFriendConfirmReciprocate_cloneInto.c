// addr: 0x013c0c00
// name: UChatCommand_RequestFriendConfirmReciprocate_cloneInto
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandRequestFriendConfirmReciprocate.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestFriendConfirmReciprocate_cloneInto(void * this, void
   * uchatCommand) */

void __thiscall
UChatCommand_RequestFriendConfirmReciprocate_cloneInto(void *this,void *uchatCommand)

{
  void *uchatCommand_00;
  
                    /* Copies a friend-confirm-reciprocate request into an existing destination,
                       including scalar fields at 0x44/0x48 and strings at 0x4c/0x68. */
  uchatCommand_00 =
       (void *)FUN_00d8d382(uchatCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &UChatCommand_RequestFriendConfirmReciprocate::RTTI_Type_Descriptor,0);
  if (uchatCommand_00 == (void *)0x0) {
    FUN_012f5a60("uchatCommand",
                 "..\\common\\networking\\uchat_command\\UChatCommandRequestFriendConfirmReciprocate.cpp"
                 ,0x5b);
  }
  UChatCommand_cloneInto(this,uchatCommand_00);
  *(undefined4 *)((int)uchatCommand_00 + 0x44) = *(undefined4 *)((int)this + 0x44);
  *(undefined1 *)((int)uchatCommand_00 + 0x48) = *(undefined1 *)((int)this + 0x48);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)uchatCommand_00 + 0x4c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x4c),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)uchatCommand_00 + 0x68),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x68),0,0xffffffff);
  return;
}

