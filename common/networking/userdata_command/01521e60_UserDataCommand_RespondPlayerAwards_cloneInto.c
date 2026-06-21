// addr: 0x01521e60
// name: UserDataCommand_RespondPlayerAwards_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRespondPlayerAwards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondPlayerAwards_cloneInto(void * this, void * source)
    */

void __thiscall UserDataCommand_RespondPlayerAwards_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_RespondPlayerAwards: casts the
                       clone argument with RTTI, calls the base cloneInto helper, and copies
                       scalar/string-vector response fields. Evidence: RTTI descriptor for
                       UserDataCommand_RespondPlayerAwards, assert string "clone", and
                       UserDataCommandRespondPlayerAwards.cpp line 0x45. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RespondPlayerAwards::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRespondPlayerAwards.cpp",
                 0x45);
  }
  UserDataCommand_cloneInto(this,source_00);
  FUN_005f1e5c((int)this + 0xc);
  return;
}

