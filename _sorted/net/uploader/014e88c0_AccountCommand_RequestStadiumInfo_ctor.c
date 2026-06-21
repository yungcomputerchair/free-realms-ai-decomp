// addr: 0x014e88c0
// name: AccountCommand_RequestStadiumInfo_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_RequestStadiumInfo_ctor(void * this) */

void * __fastcall AccountCommand_RequestStadiumInfo_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AccountCommand_RequestStadiumInfo command object: runs the
                       common command base constructor, installs the
                       AccountCommand_RequestStadiumInfo vtable, and initializes command-specific
                       fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b07e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AccountCommand_RequestStadiumInfo::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

