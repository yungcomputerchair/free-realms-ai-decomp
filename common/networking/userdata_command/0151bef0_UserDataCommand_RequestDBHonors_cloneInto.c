// addr: 0x0151bef0
// name: UserDataCommand_RequestDBHonors_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRequestDBHonors.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RequestDBHonors_cloneInto(void * this, void * source) */

void __thiscall UserDataCommand_RequestDBHonors_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_RequestDBHonors: casts the clone
                       argument with RTTI, calls the base cloneInto helper, and copies this class
                       fields into the target. Evidence: RTTI descriptor for
                       UserDataCommand_RequestDBHonors, assert string "clone", and
                       UserDataCommandRequestDBHonors.cpp line 0x2d. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RequestDBHonors::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRequestDBHonors.cpp",0x2d
                );
  }
  UserDataCommand_cloneInto(this,source_00);
  *(undefined4 *)((int)source_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

