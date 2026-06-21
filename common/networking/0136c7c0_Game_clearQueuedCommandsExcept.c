// addr: 0x0136c7c0
// name: Game_clearQueuedCommandsExcept
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_clearQueuedCommandsExcept(void * this, int keepCommandId_) */

void __thiscall Game_clearQueuedCommandsExcept(void *this,int keepCommandId_)

{
  rsize_t _DstSize;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *_Src;
  void *_Dst;
  int iVar4;
  int iVar5;
  int *piVar6;
  
                    /* Walks game command queue entries, deletes queued command objects for entries
                       whose id differs from the supplied id, compacts vectors, and advances the
                       list iterator. Evidence: calls Game_getOrCreateCommandQueueEntry and deletes
                       virtual objects from per-entry vectors. */
  piVar1 = *(int **)((int)this + 0x144);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (this == (void *)0xfffffec0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (this == (void *)0xfffffec0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)((int)this + 0x144)) {
      FUN_00d83c2d();
    }
    iVar4 = Game_getOrCreateCommandQueueEntry(piVar2 + 3);
    if (piVar2 == (int *)*(int *)((int)this + 0x144)) {
      FUN_00d83c2d();
    }
    if (piVar2[3] != keepCommandId_) {
      piVar3 = *(int **)(iVar4 + 8);
      if (piVar3 < *(int **)(iVar4 + 4)) {
        FUN_00d83c2d();
      }
      piVar6 = *(int **)(iVar4 + 4);
      if (*(int **)(iVar4 + 8) < piVar6) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (iVar4 == 0) {
          FUN_00d83c2d();
        }
        if (piVar6 == piVar3) break;
        if (iVar4 == 0) {
          FUN_00d83c2d();
        }
        if (*(int **)(iVar4 + 8) <= piVar6) {
          FUN_00d83c2d();
        }
        if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar6)(1);
        }
        if (*(int **)(iVar4 + 8) <= piVar6) {
          FUN_00d83c2d();
        }
        piVar6 = piVar6 + 1;
      }
    }
    _Src = *(void **)(iVar4 + 8);
    if (_Src < *(void **)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    _Dst = *(void **)(iVar4 + 4);
    if (*(void **)(iVar4 + 8) < _Dst) {
      FUN_00d83c2d();
    }
    if (_Dst != _Src) {
      iVar5 = *(int *)(iVar4 + 8) - (int)_Src >> 2;
      _DstSize = iVar5 * 4;
      if (0 < iVar5) {
        _memmove_s(_Dst,_DstSize,_Src,_DstSize);
      }
      *(void **)(iVar4 + 8) = (void *)(_DstSize + (int)_Dst);
    }
    FUN_0134f1a0();
  }
  return;
}

