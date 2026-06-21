// addr: 0x0138fd90
// name: Card_ModifierList_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Card_ModifierList_deletingDtor(void * this, byte flags_) */

void * __thiscall Card_ModifierList_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor-style wrapper that destroys a Card modifier-list helper
                       through FUN_0138ecc0 and conditionally frees this. */
  puStack_8 = &LAB_01683c3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_0138ecc0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

