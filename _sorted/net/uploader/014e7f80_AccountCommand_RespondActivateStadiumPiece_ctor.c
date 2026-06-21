// addr: 0x014e7f80
// name: AccountCommand_RespondActivateStadiumPiece_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_RespondActivateStadiumPiece_ctor(void * this) */

void * __fastcall AccountCommand_RespondActivateStadiumPiece_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AccountCommand_RespondActivateStadiumPiece command object: runs
                       the common command base constructor, installs the
                       AccountCommand_RespondActivateStadiumPiece vtable, and initializes
                       command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AccountCommand_RespondActivateStadiumPiece::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

