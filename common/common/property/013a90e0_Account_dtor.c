// addr: 0x013a90e0
// name: Account_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Account_dtor(void * this) */

void __fastcall Account_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys an Account object, sets Account::vftable, frees owned
                       strings/vectors, releases an owned polymorphic object, and tears down base
                       storage. Evidence is the explicit Account::vftable assignment and
                       Account_scalarDeletingDtor caller. */
  puStack_8 = &LAB_016861c6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined ***)this = Account::vftable;
  local_4 = 8;
  if (*(undefined4 **)((int)this + 0x50) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x50))(1,uVar1);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  Account_clearOwnedObjectMap(this);
  local_4 = CONCAT31(local_4._1_3_,7);
  if (0xf < *(uint *)((int)this + 0xbc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xa8));
  }
  *(undefined4 *)((int)this + 0xbc) = 0xf;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0xf < *(uint *)((int)this + 0xa0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x8c));
  }
  *(undefined4 *)((int)this + 0xa0) = 0xf;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  local_4._0_1_ = 5;
  FUN_013a9070();
  local_4._0_1_ = 4;
  FUN_013a9000();
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(void **)((int)this + 100) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 100));
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(void **)((int)this + 0x44) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x44),*(void **)((int)this + 0x48));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x44));
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < *(uint *)((int)this + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x3c) = 0xf;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < *(uint *)((int)this + 0x20)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  local_4 = 0xffffffff;
  Sortable_dtor(this);
  ExceptionList = local_c;
  return;
}

