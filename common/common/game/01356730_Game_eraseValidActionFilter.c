// addr: 0x01356730
// name: Game_eraseValidActionFilter
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_eraseValidActionFilter(void * this, void * validActionFilter) */

void __thiscall Game_eraseValidActionFilter(void *this,void *validActionFilter)

{
  int *piVar1;
  rsize_t _DstSize;
  int iVar2;
  int *_Dst;
  undefined4 unaff_EDI;
  
                    /* Finds a valid action filter handle in the Game valid-action-filter vector,
                       erases it by shifting later entries, logs success/failure, then invokes the
                       filter's destructor/release virtual. */
  if (validActionFilter == (void *)0x0) {
    FUN_012f5a60("validActionFilter","..\\common\\common\\game\\Game.cpp",0x1a96);
  }
  iVar2 = PlayElement_getId();
  piVar1 = *(int **)((int)this + 0x124);
  if (piVar1 < *(int **)((int)this + 0x120)) {
    FUN_00d83c2d();
  }
  _Dst = *(int **)((int)this + 0x120);
  if (*(int **)((int)this + 0x124) < _Dst) {
    FUN_00d83c2d();
  }
  for (; (_Dst != piVar1 && (*_Dst != iVar2)); _Dst = _Dst + 1) {
  }
  piVar1 = *(int **)((int)this + 0x124);
  if (piVar1 < *(int **)((int)this + 0x120)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xfffffee4) {
    FUN_00d83c2d();
  }
  if (_Dst == piVar1) {
    Game_logGeneral(this,"Couldn\'t find validActionFilter to erase!",unaff_EDI);
  }
  else {
    Game_logGeneral(this,"Erasing Valid Action Filter.",unaff_EDI);
    iVar2 = *(int *)((int)this + 0x124) - (int)(_Dst + 1) >> 2;
    if (0 < iVar2) {
      _DstSize = iVar2 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(int *)((int)this + 0x124) = *(int *)((int)this + 0x124) + -4;
  }
  if (validActionFilter == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0135681a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)validActionFilter)();
  return;
}

