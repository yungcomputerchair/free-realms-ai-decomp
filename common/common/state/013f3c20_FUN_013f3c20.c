// addr: 0x013f3c20
// name: FUN_013f3c20
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013f3c20(void *param_1)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  int *piVar3;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  piVar1 = *(int **)((int)param_1 + 0x10);
  if (piVar1 < *(int **)((int)param_1 + 0xc)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)((int)param_1 + 0xc);
  if (*(int **)((int)param_1 + 0x10) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (param_1 == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)param_1 + 0x10) <= piVar3) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    StateMachine_popPendingState(param_1);
    if (*(int **)((int)param_1 + 0x10) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
  }
  _Src = *(void **)((int)param_1 + 0x10);
  if (_Src < *(void **)((int)param_1 + 0xc)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)((int)param_1 + 0xc);
  if (*(void **)((int)param_1 + 0x10) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != _Src) {
    iVar2 = *(int *)((int)param_1 + 0x10) - (int)_Src >> 2;
    _DstSize = iVar2 * 4;
    if (0 < iVar2) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)((int)param_1 + 0x10) = (void *)(_DstSize + (int)_Dst);
    *(undefined4 *)((int)param_1 + 0x18) = 0;
    return 1;
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  return 1;
}

