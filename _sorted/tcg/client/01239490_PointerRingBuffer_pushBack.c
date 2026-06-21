// addr: 0x01239490
// name: PointerRingBuffer_pushBack
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall PointerRingBuffer_pushBack(int param_1,undefined4 param_2)

{
  void *pvVar1;
  uint uVar2;
  
                    /* Appends an item into a circular pointer buffer, grows when full, allocates a
                       0x20-byte slot object on demand, initializes it, then increments count. */
  if (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 1U) {
    PointerRingBuffer_grow(1);
  }
  uVar2 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(param_1 + 8);
  }
  if (*(int *)(*(int *)(param_1 + 4) + uVar2 * 4) == 0) {
    pvVar1 = Mem_Alloc(0x20);
    *(void **)(*(int *)(param_1 + 4) + uVar2 * 4) = pvVar1;
  }
  FUN_012389d0(*(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4),param_2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

