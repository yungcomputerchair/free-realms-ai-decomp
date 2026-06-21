// addr: 0x0152a960
// name: UChatCommand_RequestFriendConfirm_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_RequestFriendConfirm_ctor(void * this) */

void * __fastcall UChatCommand_RequestFriendConfirm_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UChatCommand_RequestFriendConfirm, initializes two inline strings
                       to empty and sets request flags/defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba0fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_RequestFriendConfirm::vftable;
  *(undefined4 *)((int)this + 100) = 0xf;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x80) = 0xf;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = 1;
  ExceptionList = local_c;
  return this;
}

