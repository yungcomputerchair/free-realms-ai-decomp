// addr: 0x014f9580
// name: PersistentBase_ctor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PersistentBase_ctor(undefined4 * param_1) */

void __fastcall PersistentBase_ctor(undefined4 *param_1)

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
  
                    /* Constructs/initializes the object. Evidence: PersistentBase::vftable. */
  puStack_8 = &LAB_016b3002;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *param_1 = Order::vftable;
  param_1[1] = Order::vftable;
  local_4 = 2;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1,uVar2);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 < (int *)param_1[4]) {
    FUN_00d83c2d();
  }
  piVar4 = (int *)param_1[4];
  if ((int *)param_1[5] < piVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (undefined4 *)0xfffffff4) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar1) break;
    if (param_1 == (undefined4 *)0xfffffff4) {
      FUN_00d83c2d();
    }
    if ((int *)param_1[5] <= piVar4) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    if ((int *)param_1[5] <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  _Src = (void *)param_1[5];
  if (_Src < (void *)param_1[4]) {
    FUN_00d83c2d();
  }
  _Dst = (void *)param_1[4];
  if ((void *)param_1[5] < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != _Src) {
    iVar3 = param_1[5] - (int)_Src >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[5] = (void *)(_DstSize + (int)_Dst);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  Sortable_dtor(param_1 + 1);
  *param_1 = PersistentComponent::vftable;
  *param_1 = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

