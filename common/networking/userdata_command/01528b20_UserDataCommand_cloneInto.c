// addr: 0x01528b20
// name: UserDataCommand_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_cloneInto(void * this, void * source) */

void __thiscall UserDataCommand_cloneInto(void *this,void *source)

{
  void *this_00;
  
                    /* Clone-into/copy routine for UserDataCommand: casts the clone argument with
                       RTTI, calls the base cloneInto helper, and copies this class fields into the
                       target. Evidence: RTTI descriptor for UserDataCommand, assert string "clone",
                       and UserDataCommand.cpp line 0x3d. */
  this_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &UserDataCommand::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\userdata_command\\UserDataCommand.cpp",0x3d);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

