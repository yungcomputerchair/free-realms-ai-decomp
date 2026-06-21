// addr: 0x015262c0
// name: UserDataCommand_RespondFeatureRotator_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRespondFeatureRotator.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondFeatureRotator_cloneInto(void * this, void *
   source) */

void __thiscall UserDataCommand_RespondFeatureRotator_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_RespondFeatureRotator: casts the
                       clone argument with RTTI, calls the base cloneInto helper, and copies
                       vector-like response fields. Evidence: RTTI descriptor for
                       UserDataCommand_RespondFeatureRotator, assert string "clone", and
                       UserDataCommandRespondFeatureRotator.cpp line 0x3f. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RespondFeatureRotator::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRespondFeatureRotator.cpp"
                 ,0x3f);
  }
  UserDataCommand_cloneInto(this,source_00);
  StdVector28_assign((int)this + 8);
  StdVector28_assign((int)this + 0x18);
  StdVector28_assign((int)this + 0x28);
  StdVector28_assign((int)this + 0x38);
  StdVector28_assign((int)this + 0x48);
  StdVector28_assign((int)this + 0x58);
  StdVector28_assign((int)this + 0x68);
  return;
}

