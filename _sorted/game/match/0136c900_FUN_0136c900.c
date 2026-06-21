// addr: 0x0136c900
// name: FUN_0136c900
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 popFirstValueForKey(int object_, undefined4 key_) */

undefined4 __fastcall popFirstValueForKey(int object_,undefined4 key_)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *_Dst;
  rsize_t _DstSize;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_8 [8];
  
                    /* Looks up a per-key vector/list at object+0x140 and pops the first 4-byte
                       entry from that vector, returning 0 if the key is absent or the vector is
                       empty. */
  iVar5 = *(int *)(object_ + 0x144);
  piVar4 = (int *)FUN_01354a70(local_8,&stack0x00000004);
  if ((*piVar4 == 0) || (*piVar4 != object_ + 0x140)) {
    FUN_00d83c2d();
  }
  if (piVar4[1] != iVar5) {
    iVar5 = Game_getOrCreateCommandQueueEntry(&stack0x00000004);
    if ((*(int *)(iVar5 + 4) != 0) && (*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 2 != 0)) {
      iVar5 = Game_getOrCreateCommandQueueEntry(&stack0x00000004);
      puVar2 = *(undefined4 **)(iVar5 + 4);
      puVar1 = *(undefined4 **)(iVar5 + 8);
      if (puVar1 < puVar2) {
        FUN_00d83c2d();
        puVar1 = *(undefined4 **)(iVar5 + 8);
      }
      if (puVar1 <= puVar2) {
        FUN_00d83c2d();
      }
      uVar3 = *puVar2;
      iVar5 = Game_getOrCreateCommandQueueEntry(&stack0x00000004);
      _Dst = *(void **)(iVar5 + 4);
      if (*(void **)(iVar5 + 8) < _Dst) {
        FUN_00d83c2d();
      }
      iVar5 = Game_getOrCreateCommandQueueEntry(&stack0x00000004);
      iVar6 = *(int *)(iVar5 + 8) - ((int)_Dst + 4) >> 2;
      if (0 < iVar6) {
        _DstSize = iVar6 * 4;
        _memmove_s(_Dst,_DstSize,(void *)((int)_Dst + 4),_DstSize);
      }
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -4;
      return uVar3;
    }
  }
  return 0;
}

