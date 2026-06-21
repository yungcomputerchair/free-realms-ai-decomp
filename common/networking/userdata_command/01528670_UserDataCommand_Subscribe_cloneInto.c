// addr: 0x01528670
// name: UserDataCommand_Subscribe_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandSubscribe.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_Subscribe_cloneInto(void * this, void * source) */

void __thiscall UserDataCommand_Subscribe_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_Subscribe: casts the clone
                       argument with RTTI, calls the base cloneInto helper, and copies this class
                       fields into the target. Evidence: RTTI descriptor for
                       UserDataCommand_Subscribe, assert string "clone", and
                       UserDataCommandSubscribe.cpp line 0x38. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_Subscribe::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\userdata_command\\UserDataCommandSubscribe.cpp",
                 0x38);
  }
  UserDataCommand_cloneInto(this,source_00);
  *(undefined4 *)((int)source_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)source_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

