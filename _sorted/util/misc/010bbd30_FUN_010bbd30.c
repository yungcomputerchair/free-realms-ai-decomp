// addr: 0x010bbd30
// name: FUN_010bbd30
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void list_pop_front_and_free(undefined4 * list) */

void __fastcall list_pop_front_and_free(undefined4 *list)

{
  void *_Memory;
  
                    /* Removes and frees the head of a doubly-linked list, updating head/tail and
                       decrementing count. */
  _Memory = (void *)*list;
  if (_Memory != (void *)0x0) {
    if (*(int *)((int)_Memory + 0x10) == 0) {
      *list = *(undefined4 *)((int)_Memory + 0x14);
    }
    else {
      *(undefined4 *)(*(int *)((int)_Memory + 0x10) + 0x14) = *(undefined4 *)((int)_Memory + 0x14);
    }
    if (*(int *)((int)_Memory + 0x14) == 0) {
      list[1] = *(undefined4 *)((int)_Memory + 0x10);
    }
    else {
      *(undefined4 *)(*(int *)((int)_Memory + 0x14) + 0x10) = *(undefined4 *)((int)_Memory + 0x10);
    }
    *(undefined4 *)((int)_Memory + 0x14) = 0;
    *(undefined4 *)((int)_Memory + 0x10) = 0;
    list[2] = list[2] + -1;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

