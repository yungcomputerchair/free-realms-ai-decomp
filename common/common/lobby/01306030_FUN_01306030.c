// addr: 0x01306030
// name: FUN_01306030
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01306030(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  rsize_t _DstSize;
  int iVar4;
  undefined4 *extraout_EAX;
  int iVar5;
  int *_Dst;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar4 = param_2;
  param_2 = *(undefined4 *)(param_2 + 0x1c);
  LobbyChildMap_lowerBound((void *)(param_1 + 8),local_8,&param_2,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar5 = *(int *)(param_1 + 0xc);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)(param_1 + 8))) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar5) {
    param_2 = *(int *)(iVar4 + 0x18);
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    piVar3 = *(int **)(iVar2 + 0x18);
    if (piVar3 < *(int **)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    _Dst = *(int **)(iVar2 + 0x14);
    if (*(int **)(iVar2 + 0x18) < _Dst) {
      FUN_00d83c2d();
    }
    for (; (_Dst != piVar3 && (*_Dst != param_2)); _Dst = _Dst + 1) {
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    piVar3 = *(int **)(iVar2 + 0x18);
    if (piVar3 < *(int **)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    if (iVar2 == -0x10) {
      FUN_00d83c2d();
    }
    if (_Dst != piVar3) {
      if (iVar2 == *(int *)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      iVar5 = *(int *)(iVar2 + 0x18) - (int)(_Dst + 1) >> 2;
      if (0 < iVar5) {
        _DstSize = iVar5 * 4;
        _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
      }
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -4;
    }
  }
  return;
}

