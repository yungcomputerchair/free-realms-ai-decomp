// addr: 0x01239a70
// name: CardContainer_clearObjectsAndTree
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01239aa1) */

void __fastcall CardContainer_clearObjectsAndTree(int param_1)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* Clears owned pointer vector entries by invoking virtual destructors/deletes,
                       then destroys associated rb-tree nodes and resets tree sentinel/count before
                       final cleanup. */
  piVar4 = *(int **)(param_1 + 0x40);
  if (*(int **)(param_1 + 0x44) < piVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x44);
    if (piVar1 < *(int **)(param_1 + 0x40)) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar1) break;
    if (*(int **)(param_1 + 0x44) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
      (**(code **)*piVar1)(1);
    }
    if (*(int **)(param_1 + 0x44) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  _Src = *(void **)(param_1 + 0x44);
  if (_Src < *(void **)(param_1 + 0x40)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)(param_1 + 0x40);
  if (*(void **)(param_1 + 0x44) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != _Src) {
    iVar3 = *(int *)(param_1 + 0x44) - (int)_Src >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(param_1 + 0x44) = (void *)(_DstSize + (int)_Dst);
  }
  iVar3 = **(int **)(param_1 + 0x50);
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x50);
    if (param_1 == -0x4c) {
      FUN_00d83c2d();
    }
    if (iVar3 == iVar2) break;
    if (param_1 == -0x4c) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)(param_1 + 0x50)) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(iVar3 + 0x28) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar3 + 0x28))(1);
    }
    FUN_01237420();
  }
  FUN_012394f0(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4));
  *(int *)(*(int *)(param_1 + 0x50) + 4) = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(int *)(*(int *)(param_1 + 0x50) + 8) = *(int *)(param_1 + 0x50);
  noop();
  return;
}

