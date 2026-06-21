// addr: 0x014ea570
// name: AccountCommand_SetAchievementList_dtor
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetAchievementList_dtor(int * this_obj) */

void __fastcall AccountCommand_SetAchievementList_dtor(int *this_obj)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Destroys AccountCommand_SetAchievementList by installing its vtable,
                       clearing/deleting the achievement object pointer vector, freeing the vector
                       storage, and then destroying the AccountCommand base. The
                       AccountCommand_SetAchievementList vtable is direct evidence for the class. */
  puStack_8 = &LAB_016b0d83;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *this_obj = (int)AccountCommand_SetAchievementList::vftable;
  local_4 = 1;
  AccountCommand_SetAchievementList_clearAchievements((int)this_obj);
  local_4 = local_4 & 0xffffff00;
  if ((void *)this_obj[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this_obj[3]);
  }
  this_obj[3] = 0;
  this_obj[4] = 0;
  this_obj[5] = 0;
  local_4 = 0xffffffff;
  FUN_01407bb0(uVar1);
  ExceptionList = local_c;
  return;
}

