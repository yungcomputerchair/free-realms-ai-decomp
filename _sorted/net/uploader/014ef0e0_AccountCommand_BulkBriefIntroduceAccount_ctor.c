// addr: 0x014ef0e0
// name: AccountCommand_BulkBriefIntroduceAccount_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_BulkBriefIntroduceAccount_ctor(void * this) */

void * __fastcall AccountCommand_BulkBriefIntroduceAccount_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AccountCommand_BulkBriefIntroduceAccount command object: runs
                       the common command base constructor, installs the
                       AccountCommand_BulkBriefIntroduceAccount vtable, and initializes
                       command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b1949;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AccountCommand_BulkBriefIntroduceAccount::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  ExceptionList = local_c;
  return this;
}

