// addr: 0x01306b80
// name: FUN_01306b80
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01306b80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  rsize_t _DstSize;
  int iVar3;
  int *_Dst;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar1 = **(int **)(param_1 + 0x24);
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x24);
    if (param_1 == -0x20) {
      FUN_00d83c2d();
    }
    if (iVar1 == iVar3) {
      return;
    }
    if (param_1 == -0x20) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(param_1 + 0x24)) {
      FUN_00d83c2d();
    }
    piVar2 = *(int **)(iVar1 + 0x18);
    if (piVar2 < *(int **)(iVar1 + 0x14)) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(param_1 + 0x24)) {
      FUN_00d83c2d();
    }
    _Dst = *(int **)(iVar1 + 0x14);
    if (*(int **)(iVar1 + 0x18) < _Dst) {
      FUN_00d83c2d();
    }
    for (; (_Dst != piVar2 && (*_Dst != param_2)); _Dst = _Dst + 1) {
    }
    if (iVar1 == *(int *)(param_1 + 0x24)) {
      FUN_00d83c2d();
    }
    piVar2 = *(int **)(iVar1 + 0x18);
    if (piVar2 < *(int **)(iVar1 + 0x14)) {
      FUN_00d83c2d();
    }
    if (iVar1 == -0x10) {
      FUN_00d83c2d();
    }
    if (_Dst != piVar2) break;
    FUN_01303940();
  }
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    FUN_00d83c2d();
  }
  iVar3 = *(int *)(iVar1 + 0x18) - (int)(_Dst + 1) >> 2;
  if (0 < iVar3) {
    _DstSize = iVar3 * 4;
    _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
  }
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -4;
  return;
}

