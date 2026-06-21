// addr: 0x01522720
// name: UserDataCommand_RespondPlayerAvatars_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRespondPlayerAvatars.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondPlayerAvatars_cloneInto(void * this, void *
   source) */

void __thiscall UserDataCommand_RespondPlayerAvatars_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_RespondPlayerAvatars: casts the
                       clone argument with RTTI, calls the base cloneInto helper, and copies
                       scalar/string-vector response fields. Evidence: RTTI descriptor for
                       UserDataCommand_RespondPlayerAvatars, assert string "clone", and
                       UserDataCommandRespondPlayerAvatars.cpp line 0x42. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RespondPlayerAvatars::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRespondPlayerAvatars.cpp"
                 ,0x42);
  }
  UserDataCommand_cloneInto(this,source_00);
  FUN_005f1e5c((int)this + 0xc);
  FUN_005f1e5c((int)this + 0x1c);
  FUN_005f1e5c((int)this + 0x2c);
  FUN_005f1e5c((int)this + 0x3c);
  return;
}

