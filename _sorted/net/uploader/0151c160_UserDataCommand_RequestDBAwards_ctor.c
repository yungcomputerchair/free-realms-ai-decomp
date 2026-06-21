// addr: 0x0151c160
// name: UserDataCommand_RequestDBAwards_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RequestDBAwards_ctor(void * this) */

void * __fastcall UserDataCommand_RequestDBAwards_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UserDataCommand_RequestDBAwards command object: runs the common
                       command base constructor, installs the UserDataCommand_RequestDBAwards
                       vtable, and initializes command-specific fields/containers to empty defaults.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b8008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01528920(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UserDataCommand_RequestDBAwards::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

