// addr: 0x0152a340
// name: UChatCommand_OnReceiveFriendLogin_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_OnReceiveFriendLogin_ctor(void * this) */

void * __fastcall UChatCommand_OnReceiveFriendLogin_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UChatCommand_OnReceiveFriendLogin by running the shared
                       UChatCommand base constructor and assigning the derived vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b9f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_OnReceiveFriendLogin::vftable;
  ExceptionList = local_c;
  return this;
}

