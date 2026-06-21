// addr: 0x014e93b0
// name: AccountCommand_ValidateUsername_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_ValidateUsername_ctor(void * this) */

void * __fastcall AccountCommand_ValidateUsername_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AccountCommand_ValidateUsername command object: runs the common
                       command base constructor, installs the AccountCommand_ValidateUsername
                       vtable, and initializes command-specific fields/containers to empty defaults.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0a73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AccountCommand_ValidateUsername::vftable;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x25) = 1;
  ExceptionList = local_c;
  return this;
}

