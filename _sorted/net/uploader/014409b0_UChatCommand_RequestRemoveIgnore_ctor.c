// addr: 0x014409b0
// name: UChatCommand_RequestRemoveIgnore_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UChatCommand_RequestRemoveIgnore_ctor(void * this) */

void * __fastcall UChatCommand_RequestRemoveIgnore_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RequestRemoveIgnore chat command and initializes its two inline
                       string fields to empty small-string state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016989ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013bd2e0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = UChatCommand_RequestRemoveIgnore::vftable;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x78) = 0xf;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  ExceptionList = local_c;
  return this;
}

