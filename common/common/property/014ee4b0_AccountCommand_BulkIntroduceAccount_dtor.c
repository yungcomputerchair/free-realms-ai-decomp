// addr: 0x014ee4b0
// name: AccountCommand_BulkIntroduceAccount_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_BulkIntroduceAccount_dtor(void * this) */

void __fastcall AccountCommand_BulkIntroduceAccount_dtor(void *this)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys AccountCommand_BulkIntroduceAccount, releasing owned command
                       pointers and several vector/string fields before base destruction. */
  puStack_8 = &LAB_016b17bf;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(undefined ***)this = AccountCommand_BulkIntroduceAccount::vftable;
  local_4 = 5;
  piVar1 = *(int **)((int)this + 0x50);
  if (piVar1 < *(int **)((int)this + 0x4c)) {
    FUN_00d83c2d(uVar2);
  }
  piVar4 = *(int **)((int)this + 0x4c);
  if (*(int **)((int)this + 0x50) < piVar4) {
    FUN_00d83c2d(uVar2);
  }
  while( true ) {
    if (this == (void *)0xffffffb8) {
      FUN_00d83c2d(uVar2);
    }
    if (piVar4 == piVar1) break;
    if (this == (void *)0xffffffb8) {
      FUN_00d83c2d(uVar2);
    }
    if (*(int **)((int)this + 0x50) <= piVar4) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    if (*(int **)((int)this + 0x50) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  _Src = *(void **)((int)this + 0x50);
  if (_Src < *(void **)((int)this + 0x4c)) {
    FUN_00d83c2d(uVar2);
  }
  _Dst = *(void **)((int)this + 0x4c);
  if (*(void **)((int)this + 0x50) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != _Src) {
    iVar3 = *(int *)((int)this + 0x50) - (int)_Src >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)((int)this + 0x50) = (void *)(_DstSize + (int)_Dst);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if (*(void **)((int)this + 0x4c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(void **)((int)this + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x3c));
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x2c),*(void **)((int)this + 0x30));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x1c),*(void **)((int)this + 0x20));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x1c));
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
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

