// addr: 0x007458f0
// name: LinkedList_unlinkTail
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LinkedList_unlinkTail(void * list) */

void __fastcall LinkedList_unlinkTail(void *list)

{
  int iVar1;
  
                    /* Unlinks the current tail node from a doubly-linked list, fixes neighboring
                       links, clears the removed node's prev/next, and decrements the list count. */
  iVar1 = *(int *)((int)list + 4);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 4) == 0) {
    *(undefined4 *)list = *(undefined4 *)(iVar1 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
  }
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)((int)list + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(int *)((int)list + 8) = *(int *)((int)list + 8) + -1;
    return;
  }
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(int *)((int)list + 8) = *(int *)((int)list + 8) + -1;
  return;
}

