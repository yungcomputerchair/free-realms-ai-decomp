// addr: 0x0152b680
// name: UChatCommand_RequestSetFriendComment_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_RequestSetFriendComment_ctor(void * this) */

void * __fastcall UChatCommand_RequestSetFriendComment_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UChatCommand_RequestSetFriendComment and initializes three inline
                       string fields to empty. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba3a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_RequestSetFriendComment::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x78) = 0xf;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x94) = 0xf;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  ExceptionList = local_c;
  return this;
}

