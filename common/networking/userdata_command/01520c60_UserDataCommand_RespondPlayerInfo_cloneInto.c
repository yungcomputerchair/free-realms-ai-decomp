// addr: 0x01520c60
// name: UserDataCommand_RespondPlayerInfo_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRespondPlayerInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondPlayerInfo_cloneInto(void * this, void * source)
    */

void __thiscall UserDataCommand_RespondPlayerInfo_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_RespondPlayerInfo: casts the
                       clone argument with RTTI, calls the base cloneInto helper, and copies
                       scalar/string-vector response fields. Evidence: RTTI descriptor for
                       UserDataCommand_RespondPlayerInfo, assert string "clone", and
                       UserDataCommandRespondPlayerInfo.cpp line 0x8b. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RespondPlayerInfo::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRespondPlayerInfo.cpp",
                 0x8b);
  }
  UserDataCommand_cloneInto(this,source_00);
  *(undefined4 *)((int)source_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)source_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)source_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)source_00 + 0x18) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)source_00 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)source_00 + 0x20) = *(undefined4 *)((int)this + 0x20);
  FUN_005f1e5c((int)this + 0x24);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)source_00 + 0x34),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x34),0,0xffffffff);
  return;
}

