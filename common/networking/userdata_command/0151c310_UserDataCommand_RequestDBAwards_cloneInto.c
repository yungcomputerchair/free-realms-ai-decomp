// addr: 0x0151c310
// name: UserDataCommand_RequestDBAwards_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRequestDBAwards.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RequestDBAwards_cloneInto(void * this, void * source) */

void __thiscall UserDataCommand_RequestDBAwards_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_RequestDBAwards: casts the clone
                       argument with RTTI, calls the base cloneInto helper, and copies this class
                       fields into the target. Evidence: RTTI descriptor for
                       UserDataCommand_RequestDBAwards, assert string "clone", and
                       UserDataCommandRequestDBAwards.cpp line 0x2d. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RequestDBAwards::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRequestDBAwards.cpp",0x2d
                );
  }
  UserDataCommand_cloneInto(this,source_00);
  *(undefined4 *)((int)source_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

