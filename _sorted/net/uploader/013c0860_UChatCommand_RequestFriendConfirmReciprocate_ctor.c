// addr: 0x013c0860
// name: UChatCommand_RequestFriendConfirmReciprocate_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_RequestFriendConfirmReciprocate_ctor(void * this) */

void * __fastcall UChatCommand_RequestFriendConfirmReciprocate_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RequestFriendConfirmReciprocate chat command, initializes base
                       command state and inline string buffers, and sets default status fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168913e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_RequestFriendConfirmReciprocate::vftable;
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

