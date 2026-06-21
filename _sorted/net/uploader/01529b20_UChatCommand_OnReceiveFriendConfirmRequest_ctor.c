// addr: 0x01529b20
// name: UChatCommand_OnReceiveFriendConfirmRequest_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_OnReceiveFriendConfirmRequest_ctor(void * this) */

void * __fastcall UChatCommand_OnReceiveFriendConfirmRequest_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UChatCommand_OnReceiveFriendConfirmRequest command object: runs
                       the common command base constructor, installs the
                       UChatCommand_OnReceiveFriendConfirmRequest vtable, and initializes
                       command-specific fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b9d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_OnReceiveFriendConfirmRequest::vftable;
  ExceptionList = local_c;
  return this;
}

