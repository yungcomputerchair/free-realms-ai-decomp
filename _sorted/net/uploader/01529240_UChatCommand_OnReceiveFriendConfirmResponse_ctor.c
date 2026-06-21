// addr: 0x01529240
// name: UChatCommand_OnReceiveFriendConfirmResponse_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_OnReceiveFriendConfirmResponse_ctor(void * this) */

void * __fastcall UChatCommand_OnReceiveFriendConfirmResponse_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UChatCommand_OnReceiveFriendConfirmResponse command object: runs
                       the common command base constructor, installs the
                       UChatCommand_OnReceiveFriendConfirmResponse vtable, and initializes
                       command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b9b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_OnReceiveFriendConfirmResponse::vftable;
  *(undefined1 *)((int)this + 0x44) = 0;
  ExceptionList = local_c;
  return this;
}

