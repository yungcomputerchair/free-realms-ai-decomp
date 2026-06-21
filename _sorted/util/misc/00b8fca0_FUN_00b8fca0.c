// addr: 0x00b8fca0
// name: FUN_00b8fca0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00b8fca0(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  void *pvVar2;
  uint uVar3;
  
                    /* Removes the current node from a hash bucket and linked list, clears its
                       links, decrements the container count, and frees the node. No class evidence,
                       so left unnamed. */
  _Memory = *(void **)(param_1 + 4);
  if (_Memory == (void *)0x0) {
    return;
  }
  uVar3 = *(uint *)((int)_Memory + 0x30) % 1000;
  pvVar2 = *(void **)(param_1 + 0x10 + uVar3 * 4);
  puVar1 = (undefined4 *)(param_1 + 0x10 + uVar3 * 4);
  do {
    if (pvVar2 == (void *)0x0) {
LAB_00b8fcf1:
      if (*(int *)((int)_Memory + 0x34) == 0) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)_Memory + 0x38);
      }
      else {
        *(undefined4 *)(*(int *)((int)_Memory + 0x34) + 0x38) = *(undefined4 *)((int)_Memory + 0x38)
        ;
      }
      if (*(int *)((int)_Memory + 0x38) == 0) {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)_Memory + 0x34);
      }
      else {
        *(undefined4 *)(*(int *)((int)_Memory + 0x38) + 0x34) = *(undefined4 *)((int)_Memory + 0x34)
        ;
      }
      *(undefined4 *)((int)_Memory + 0x38) = 0;
      *(undefined4 *)((int)_Memory + 0x34) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if (pvVar2 == _Memory) {
      *puVar1 = *(undefined4 *)((int)pvVar2 + 0x2c);
      *(undefined4 *)((int)pvVar2 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x30) = 0;
      goto LAB_00b8fcf1;
    }
    puVar1 = (undefined4 *)((int)pvVar2 + 0x2c);
    pvVar2 = (void *)*puVar1;
  } while( true );
}

