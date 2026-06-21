// addr: 0x01390da0
// name: Card_ModifierTree_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Card_ModifierTree_deletingDtor(void * this, byte flags_) */

void * __thiscall Card_ModifierTree_deletingDtor(void *this,byte flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor-style wrapper that destroys a Card modifier-tree/list
                       helper through FUN_0138f140 and conditionally frees this. */
  puStack_8 = &LAB_01683d3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_0138f140(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((flags_ & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

