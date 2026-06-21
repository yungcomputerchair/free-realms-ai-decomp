// addr: 0x01523c80
// name: UserDataCommand_RespondDBAwards_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRespondDBAwards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondDBAwards_cloneInto(void * this, void * source) */

void __thiscall UserDataCommand_RespondDBAwards_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_RespondDBAwards: casts the clone
                       argument with RTTI, calls the base cloneInto helper, and copies
                       scalar/string-vector response fields. Evidence: RTTI descriptor for
                       UserDataCommand_RespondDBAwards, assert string "clone", and
                       UserDataCommandRespondDBAwards.cpp line 0x42. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RespondDBAwards::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRespondDBAwards.cpp",0x42
                );
  }
  UserDataCommand_cloneInto(this,source_00);
  FUN_005f1e5c((int)this + 0xc);
  StdVector28_assign((int)this + 0x1c);
  StdVector28_assign((int)this + 0x2c);
  StdVector28_assign((int)this + 0x3c);
  return;
}

