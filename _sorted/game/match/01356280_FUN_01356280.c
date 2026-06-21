// addr: 0x01356280
// name: FUN_01356280
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void removeValueFromObjectVector(int object_, int value_) */

void __thiscall removeValueFromObjectVector(void *this,int object_,int value_)

{
  int *piVar1;
  rsize_t _DstSize;
  int iVar2;
  int *_Dst;
  
                    /* Removes the first occurrence of a 4-byte value from a vector stored at object
                       offsets 0x1b4..0x1b8 by shifting later entries down. Exact owning class is
                       not evident. */
  piVar1 = *(int **)((int)this + 0x1b8);
  if (piVar1 < *(int **)((int)this + 0x1b4)) {
    FUN_00d83c2d();
  }
  _Dst = *(int **)((int)this + 0x1b4);
  if (*(int **)((int)this + 0x1b8) < _Dst) {
    FUN_00d83c2d();
  }
  for (; (_Dst != piVar1 && (*_Dst != object_)); _Dst = _Dst + 1) {
  }
  piVar1 = *(int **)((int)this + 0x1b8);
  if (piVar1 < *(int **)((int)this + 0x1b4)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xfffffe50) {
    FUN_00d83c2d();
  }
  if (_Dst != piVar1) {
    iVar2 = *(int *)((int)this + 0x1b8) - (int)(_Dst + 1) >> 2;
    if (0 < iVar2) {
      _DstSize = iVar2 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(int *)((int)this + 0x1b8) = *(int *)((int)this + 0x1b8) + -4;
  }
  return;
}

