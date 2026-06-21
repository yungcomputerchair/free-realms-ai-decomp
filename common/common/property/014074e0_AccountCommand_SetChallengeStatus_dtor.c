// addr: 0x014074e0
// name: AccountCommand_SetChallengeStatus_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetChallengeStatus_dtor(void * this) */

void __fastcall AccountCommand_SetChallengeStatus_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Non-deleting destructor for AccountCommand_SetChallengeStatus; it resets the
                       vtable, destroys inherited/account command state, frees an owned dynamic
                       buffer, clears its vector/string fields, and calls the base AccountCommand
                       cleanup. */
  puStack_8 = &LAB_016916ce;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = AccountCommand_SetChallengeStatus::vftable;
  local_4 = 1;
  FUN_01321610(uVar1);
  local_4 = local_4 & 0xffffff00;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0xc),*(void **)((int)this + 0x10));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  FUN_01407bb0();
  ExceptionList = local_c;
  return;
}

