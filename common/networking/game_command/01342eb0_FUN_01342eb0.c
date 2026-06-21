// addr: 0x01342eb0
// name: FUN_01342eb0
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01342eb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  rsize_t _DstSize;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *_Dst;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  puStack_8 = &LAB_0167c818;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  piVar4 = (int *)FUN_01341880(local_24,&stack0x00000008);
  iVar5 = *piVar4;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = piVar4[1];
  if ((iVar5 == 0) || (iVar5 != param_1 + 0xc)) {
    FUN_00d83c2d(uVar3);
  }
  if (iVar2 != iVar1) {
    if (iVar5 == 0) {
      FUN_00d83c2d(uVar3);
    }
    if (iVar2 == *(int *)(iVar5 + 4)) {
      FUN_00d83c2d(uVar3);
    }
    piVar4 = *(int **)(iVar2 + 0x18);
    if (piVar4 < *(int **)(iVar2 + 0x14)) {
      FUN_00d83c2d(uVar3);
    }
    if (iVar2 == *(int *)(iVar5 + 4)) {
      FUN_00d83c2d();
    }
    _Dst = *(int **)(iVar2 + 0x14);
    if (*(int **)(iVar2 + 0x18) < _Dst) {
      FUN_00d83c2d();
    }
    for (; (_Dst != piVar4 && (*_Dst != param_2)); _Dst = _Dst + 1) {
    }
    if (iVar2 == *(int *)(iVar5 + 4)) {
      FUN_00d83c2d();
    }
    piVar4 = *(int **)(iVar2 + 0x18);
    if (piVar4 < *(int **)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    if (iVar2 == -0x10) {
      FUN_00d83c2d();
    }
    if (_Dst != piVar4) {
      if (iVar2 == *(int *)(iVar5 + 4)) {
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
  ExceptionList = local_c;
  return;
}

