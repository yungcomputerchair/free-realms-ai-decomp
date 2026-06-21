// addr: 0x014e32e0
// name: ECommCommand_OrderHistory_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ECommCommand_OrderHistory_ctor(void * this) */

void * __fastcall ECommCommand_OrderHistory_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ECommCommand_OrderHistory command object: runs the common
                       command base constructor, installs the ECommCommand_OrderHistory vtable, and
                       initializes command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af8f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_014e3430(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = ECommCommand_OrderHistory::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

