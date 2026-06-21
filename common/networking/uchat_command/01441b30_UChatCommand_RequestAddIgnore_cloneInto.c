// addr: 0x01441b30
// name: UChatCommand_RequestAddIgnore_cloneInto
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandRequestAddIgnore.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestAddIgnore_cloneInto(void * this, void * uchatCommand)
    */

void __thiscall UChatCommand_RequestAddIgnore_cloneInto(void *this,void *uchatCommand)

{
  void *uchatCommand_00;
  
                    /* Copies an add-ignore request into an existing destination, including two
                       derived string fields at 0x44 and 0x60. */
  uchatCommand_00 =
       (void *)FUN_00d8d382(uchatCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                            &UChatCommand_RequestAddIgnore::RTTI_Type_Descriptor,0);
  if (uchatCommand_00 == (void *)0x0) {
    FUN_012f5a60("uchatCommand",
                 "..\\common\\networking\\uchat_command\\UChatCommandRequestAddIgnore.cpp",0x44);
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
  return;
}

