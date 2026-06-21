// addr: 0x014e8e80
// name: AccountCommand_RequestActivateStadiumPiece_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AccountCommand_RequestActivateStadiumPiece_ctor(void * this) */

void * __fastcall AccountCommand_RequestActivateStadiumPiece_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a AccountCommand_RequestActivateStadiumPiece command object: runs
                       the common command base constructor, installs the
                       AccountCommand_RequestActivateStadiumPiece vtable, and initializes
                       command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0913;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01407af0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = AccountCommand_RequestActivateStadiumPiece::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

