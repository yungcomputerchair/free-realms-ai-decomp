// addr: 0x013561c0
// name: Game_unregisterObject_013561c0
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_unregisterObject_013561c0(void * this, void * object) */

void __thiscall Game_unregisterObject_013561c0(void *this,void *object)

{
  int *piVar1;
  rsize_t _DstSize;
  int iVar2;
  int *_Dst;
  
                    /* Converts an object to its registered handle/id, finds that id in the Game
                       vector at 0x220-0x224, and removes it by memmove if present. */
  if (object == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\game\\Game.cpp",0x6f4);
  }
  iVar2 = PlayElement_getId();
  piVar1 = *(int **)((int)this + 0x224);
  if (piVar1 < *(int **)((int)this + 0x220)) {
    FUN_00d83c2d();
  }
  _Dst = *(int **)((int)this + 0x220);
  if (*(int **)((int)this + 0x224) < _Dst) {
    FUN_00d83c2d();
  }
  for (; (_Dst != piVar1 && (*_Dst != iVar2)); _Dst = _Dst + 1) {
  }
  piVar1 = *(int **)((int)this + 0x224);
  if (piVar1 < *(int **)((int)this + 0x220)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xfffffde4) {
    FUN_00d83c2d();
  }
  if (_Dst != piVar1) {
    iVar2 = *(int *)((int)this + 0x224) - (int)(_Dst + 1) >> 2;
    if (0 < iVar2) {
      _DstSize = iVar2 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(int *)((int)this + 0x224) = *(int *)((int)this + 0x224) + -4;
  }
  return;
}

