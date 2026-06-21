// addr: 0x01238e60
// name: PointerRingBuffer_grow
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall PointerRingBuffer_grow(int param_1,uint param_2)

{
  void *pvVar1;
  rsize_t _DstSize;
  uint uVar2;
  undefined4 *_Dst;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
                    /* Grows a circular/ring buffer of pointers, preserving wrapped contents with
                       memmove, zero-filling new slots, and updating capacity. */
  uVar2 = *(uint *)(param_1 + 8);
  uVar5 = param_2;
  if (0x7ffffff - uVar2 < param_2) {
    uVar9 = FUN_01238850();
    uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar2 = (uint)uVar9;
  }
  uVar4 = uVar2 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((uVar5 < uVar4) && (uVar2 <= 0x7ffffff - uVar4)) {
    uVar5 = uVar4;
    param_2 = uVar4;
  }
  uVar4 = *(uint *)(param_1 + 0xc);
  _Dst = (undefined4 *)FUN_01237500(uVar2 + uVar5);
  iVar6 = uVar4 * 4;
  pvVar1 = (void *)(iVar6 + *(int *)(param_1 + 4));
  iVar3 = (*(int *)(param_1 + 8) * 4 - (int)pvVar1) + *(int *)(param_1 + 4) >> 2;
  puVar8 = _Dst + uVar4 + iVar3;
  if (iVar3 != 0) {
    _memmove_s(_Dst + uVar4,iVar3 * 4,pvVar1,iVar3 * 4);
  }
  if (param_2 < uVar4) {
    iVar3 = (int)(param_2 * 4) >> 2;
    if (iVar3 != 0) {
      _DstSize = iVar3 * 4;
      _memmove_s(puVar8,_DstSize,*(void **)(param_1 + 4),_DstSize);
    }
    pvVar1 = (void *)(*(int *)(param_1 + 4) + param_2 * 4);
    iVar6 = (iVar6 - (int)pvVar1) + *(int *)(param_1 + 4) >> 2;
    puVar8 = _Dst + iVar6;
    uVar4 = param_2;
    if (iVar6 != 0) {
      _memmove_s(_Dst,iVar6 * 4,pvVar1,iVar6 * 4);
    }
  }
  else {
    iVar6 = iVar6 >> 2;
    puVar7 = puVar8 + iVar6;
    if (iVar6 != 0) {
      _memmove_s(puVar8,iVar6 * 4,*(void **)(param_1 + 4),iVar6 * 4);
    }
    iVar6 = param_2 - uVar4;
    puVar8 = _Dst;
    if (iVar6 != 0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
  }
  if (uVar4 != 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
    *(undefined4 **)(param_1 + 4) = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}

