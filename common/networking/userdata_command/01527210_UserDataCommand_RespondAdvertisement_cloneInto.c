// addr: 0x01527210
// name: UserDataCommand_RespondAdvertisement_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRespondAdvertisement.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondAdvertisement_cloneInto(void * this, void *
   source) */

void __thiscall UserDataCommand_RespondAdvertisement_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_RespondAdvertisement: casts the
                       clone argument with RTTI, calls the base cloneInto helper, and copies
                       vector-like response fields. Evidence: RTTI descriptor for
                       UserDataCommand_RespondAdvertisement, assert string "clone", and
                       UserDataCommandRespondAdvertisement.cpp line 0x37. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RespondAdvertisement::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRespondAdvertisement.cpp"
                 ,0x37);
  }
  UserDataCommand_cloneInto(this,source_00);
  StdVector28_assign((int)this + 8);
  StdVector28_assign((int)this + 0x18);
  StdVector28_assign((int)this + 0x28);
  StdVector28_assign((int)this + 0x38);
  return;
}

