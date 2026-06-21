// addr: 0x01529f30
// name: UChatCommand_OnReceiveFriendLogout_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_OnReceiveFriendLogout_ctor(void * this) */

void * __fastcall UChatCommand_OnReceiveFriendLogout_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a UChatCommand_OnReceiveFriendLogout command object: runs the
                       common command base constructor, installs the
                       UChatCommand_OnReceiveFriendLogout vtable, and initializes command-specific
                       fields/containers to empty defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b9e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_OnReceiveFriendLogout::vftable;
  ExceptionList = local_c;
  return this;
}

