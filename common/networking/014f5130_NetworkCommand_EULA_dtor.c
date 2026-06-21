// addr: 0x014f5130
// name: NetworkCommand_EULA_dtor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_EULA_dtor(void * this) */

void __fastcall NetworkCommand_EULA_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Non-deleting destructor for NetworkCommand_EULA; destroys several container
                       members, frees its string, and calls NetworkCommand_dtor. */
  puStack_8 = &LAB_016b28b4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = NetworkCommand_EULA::vftable;
  local_4 = 3;
  FUN_01321610(uVar1);
  local_4._0_1_ = 2;
  FUN_01321610();
  local_4._0_1_ = 1;
  FUN_00f98150();
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < *(uint *)((int)this + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_4 = 0xffffffff;
  NetworkCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

