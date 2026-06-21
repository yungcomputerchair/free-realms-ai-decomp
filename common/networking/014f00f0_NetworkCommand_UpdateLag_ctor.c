// addr: 0x014f00f0
// name: NetworkCommand_UpdateLag_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_UpdateLag_ctor(void * this) */

void * __fastcall NetworkCommand_UpdateLag_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_UpdateLag by running NetworkCommand_ctor,
                       installing vtable, and initializing an embedded container/member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b1b83;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = NetworkCommand_UpdateLag::vftable;
  FUN_005258fb(uVar1);
  ExceptionList = local_c;
  return this;
}

