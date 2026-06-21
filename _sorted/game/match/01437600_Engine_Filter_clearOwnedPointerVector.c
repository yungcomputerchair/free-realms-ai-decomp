// addr: 0x01437600
// name: Engine_Filter_clearOwnedPointerVector
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01437624) */
/* Setting prototype: void Engine_Filter_clearOwnedPointerVector(void * this) */

void __fastcall Engine_Filter_clearOwnedPointerVector(void *this)

{
  rsize_t _DstSize;
  undefined4 *puVar1;
  void *pvVar2;
  void *_Dst;
  int iVar3;
  undefined4 *puVar4;
  
                    /* Clears Engine_Filter's vector of owned pointers at +0x28, destroying each
                       element with FUN_012c54e0 and freeing it. Evidence is caller
                       Engine_Filter_dtor and vector reset logic. */
  puVar4 = *(undefined4 **)((int)this + 0x28);
  if (*(undefined4 **)((int)this + 0x2c) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = *(undefined4 **)((int)this + 0x2c);
    if (puVar1 < *(undefined4 **)((int)this + 0x28)) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) {
      pvVar2 = *(void **)((int)this + 0x2c);
      if (pvVar2 < *(void **)((int)this + 0x28)) {
        FUN_00d83c2d();
      }
      _Dst = *(void **)((int)this + 0x28);
      if (*(void **)((int)this + 0x2c) < _Dst) {
        FUN_00d83c2d();
      }
      if (_Dst != pvVar2) {
        iVar3 = *(int *)((int)this + 0x2c) - (int)pvVar2 >> 2;
        _DstSize = iVar3 * 4;
        if (0 < iVar3) {
          _memmove_s(_Dst,_DstSize,pvVar2,_DstSize);
        }
        *(void **)((int)this + 0x2c) = (void *)(_DstSize + (int)_Dst);
      }
      return;
    }
    if (*(undefined4 **)((int)this + 0x2c) <= puVar4) {
      FUN_00d83c2d();
    }
    pvVar2 = (void *)*puVar4;
    if (pvVar2 != (void *)0x0) break;
    if (*(undefined4 **)((int)this + 0x2c) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  FUN_012c54e0();
                    /* WARNING: Subroutine does not return */
  _free(pvVar2);
}

