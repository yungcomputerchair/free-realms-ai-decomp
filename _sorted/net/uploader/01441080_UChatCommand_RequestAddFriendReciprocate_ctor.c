// addr: 0x01441080
// name: UChatCommand_RequestAddFriendReciprocate_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_RequestAddFriendReciprocate_ctor(void * this) */

void * __fastcall UChatCommand_RequestAddFriendReciprocate_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RequestAddFriendReciprocate chat command, initializes three
                       inline strings, and enables its default reciprocate/notify flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01698b09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_RequestAddFriendReciprocate::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x78) = 0xf;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x94) = 0xf;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined1 *)((int)this + 0x98) = 1;
  ExceptionList = local_c;
  return this;
}

