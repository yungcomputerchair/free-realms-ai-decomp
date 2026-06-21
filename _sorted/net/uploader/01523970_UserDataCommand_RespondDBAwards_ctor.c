// addr: 0x01523970
// name: UserDataCommand_RespondDBAwards_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondDBAwards_ctor(void * this) */

void * __fastcall UserDataCommand_RespondDBAwards_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UserDataCommand_RespondDBAwards command object: runs the common
                       command base constructor, installs the UserDataCommand_RespondDBAwards
                       vtable, and initializes command-specific fields/containers to empty defaults.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b8d64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01528920(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UserDataCommand_RespondDBAwards::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  ExceptionList = local_c;
  return this;
}

