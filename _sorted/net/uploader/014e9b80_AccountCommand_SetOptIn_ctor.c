// addr: 0x014e9b80
// name: AccountCommand_SetOptIn_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_SetOptIn_ctor(void * this) */

void * __fastcall AccountCommand_SetOptIn_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AccountCommand_SetOptIn command object: runs the common command
                       base constructor, installs the AccountCommand_SetOptIn vtable, and
                       initializes command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0c28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AccountCommand_SetOptIn::vftable;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 9) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

