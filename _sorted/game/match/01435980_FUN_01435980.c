// addr: 0x01435980
// name: FUN_01435980
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01435980(int param_1)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  int *piVar3;
  
                    /* Deletes each pointer element in a vector-like range, then compacts/clears the
                       vector storage. Exact container owner is unclear. */
  piVar3 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 8) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 < *(int **)(param_1 + 4)) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (*(int **)(param_1 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    if (*(int **)(param_1 + 8) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
  }
  _Src = *(void **)(param_1 + 8);
  if (_Src < *(void **)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)(param_1 + 4);
  if (*(void **)(param_1 + 8) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != _Src) {
    iVar2 = *(int *)(param_1 + 8) - (int)_Src >> 2;
    _DstSize = iVar2 * 4;
    if (0 < iVar2) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(param_1 + 8) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}

