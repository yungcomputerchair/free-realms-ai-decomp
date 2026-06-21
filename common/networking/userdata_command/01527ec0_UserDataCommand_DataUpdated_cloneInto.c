// addr: 0x01527ec0
// name: UserDataCommand_DataUpdated_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandDataUpdated.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_DataUpdated_cloneInto(void * this, void * source) */

void __thiscall UserDataCommand_DataUpdated_cloneInto(void *this,void *source)

{
  void *source_00;
  
                    /* Clone-into/copy routine for UserDataCommand_DataUpdated: casts the clone
                       argument with RTTI, copies base fields plus update metadata, and copies the
                       diff-map member. Evidence: RTTI descriptor for UserDataCommand_DataUpdated,
                       assert string "clone", and UserDataCommandDataUpdated.cpp line 0x8b. */
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_DataUpdated::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\userdata_command\\UserDataCommandDataUpdated.cpp",
                 0x8b);
  }
  UserDataCommand_cloneInto(this,source_00);
  *(undefined4 *)((int)source_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)source_00 + 0x18) = *(undefined4 *)((int)this + 0x18);
  UserDataCommand_DataUpdated_copyDiffMap(source_00,(void *)((int)this + 8));
  return;
}

