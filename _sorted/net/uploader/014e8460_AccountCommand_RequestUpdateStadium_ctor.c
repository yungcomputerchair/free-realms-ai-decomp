// addr: 0x014e8460
// name: AccountCommand_RequestUpdateStadium_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_RequestUpdateStadium_ctor(void * this) */

void * __fastcall AccountCommand_RequestUpdateStadium_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AccountCommand_RequestUpdateStadium command object: runs the
                       common command base constructor, installs the
                       AccountCommand_RequestUpdateStadium vtable, and initializes command-specific
                       fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0693;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AccountCommand_RequestUpdateStadium::vftable;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

