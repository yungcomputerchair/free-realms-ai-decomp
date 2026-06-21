// addr: 0x01331bd0
// name: Game_removeModifier
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_removeModifier(int param_1,undefined4 *param_2)

{
  int *piVar1;
  rsize_t _DstSize;
  int iVar2;
  int *_Dst;
  
                    /* Removes a modifier id from the Game modifier vector, resets modifier state,
                       and destroys the modifier object if present. Evidence: cwgame.cpp "modifier"
                       assert, PlayElement_getId lookup, memmove erase, and reset call. */
  if (param_2 == (undefined4 *)0x0) {
    FUN_012f5a60("modifier","..\\common\\rules\\game\\cwgame.cpp",0x5c5);
  }
  iVar2 = PlayElement_getId();
  piVar1 = *(int **)(param_1 + 0x3b4);
  if (piVar1 < *(int **)(param_1 + 0x3b0)) {
    FUN_00d83c2d();
  }
  _Dst = *(int **)(param_1 + 0x3b0);
  if (*(int **)(param_1 + 0x3b4) < _Dst) {
    FUN_00d83c2d();
  }
  for (; (_Dst != piVar1 && (*_Dst != iVar2)); _Dst = _Dst + 1) {
  }
  piVar1 = *(int **)(param_1 + 0x3b4);
  if (piVar1 < *(int **)(param_1 + 0x3b0)) {
    FUN_00d83c2d();
  }
  if (param_1 == -0x3ac) {
    FUN_00d83c2d();
  }
  if (_Dst != piVar1) {
    iVar2 = *(int *)(param_1 + 0x3b4) - (int)(_Dst + 1) >> 2;
    if (0 < iVar2) {
      _DstSize = iVar2 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(int *)(param_1 + 0x3b4) = *(int *)(param_1 + 0x3b4) + -4;
    AttributeModifier_resetState();
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
    }
  }
  return;
}

