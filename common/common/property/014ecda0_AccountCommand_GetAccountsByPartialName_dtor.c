// addr: 0x014ecda0
// name: AccountCommand_GetAccountsByPartialName_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_GetAccountsByPartialName_dtor(void * this) */

void __fastcall AccountCommand_GetAccountsByPartialName_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for AccountCommand_GetAccountsByPartialName. It installs
                       AccountCommand_GetAccountsByPartialName::vftable and frees several
                       std::string/vector-style owned members before returning. */
  puStack_8 = &LAB_016b1434;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = AccountCommand_GetAccountsByPartialName::vftable;
  local_4 = 3;
  if (0xf < *(uint *)((int)this + 0x50)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x3c));
  }
  *(undefined4 *)((int)this + 0x50) = 0xf;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  local_4 = 2;
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x2c),*(void **)((int)this + 0x30));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_4 = 1;
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x1c),*(void **)((int)this + 0x20));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x1c));
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4 = 0;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  FUN_01407bb0(uVar1);
  ExceptionList = local_c;
  return;
}

