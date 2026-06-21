// addr: 0x0151bd40
// name: UserDataCommand_RequestDBHonors_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RequestDBHonors_ctor(void * this) */

void * __fastcall UserDataCommand_RequestDBHonors_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UserDataCommand_RequestDBHonors command object: runs the common
                       command base constructor, installs the UserDataCommand_RequestDBHonors
                       vtable, and initializes command-specific fields/containers to empty defaults.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01528920(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UserDataCommand_RequestDBHonors::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

