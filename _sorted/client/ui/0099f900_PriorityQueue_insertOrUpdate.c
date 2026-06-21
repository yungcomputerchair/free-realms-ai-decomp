// addr: 0x0099f900
// name: PriorityQueue_insertOrUpdate
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PriorityQueue_insertOrUpdate(void * this, int * priority, void * item)
    */

void * __thiscall PriorityQueue_insertOrUpdate(void *this,int *priority,void *item)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* Adds an item to an array-backed min-heap if it is not already queued, or
                       updates its priority, then rebalances the heap. Item fields +0x18/+0x1c store
                       heap index and priority. */
  if (*(int *)((int)item + 0x18) == -1) {
    *(int *)((int)item + 0x1c) = *priority;
    *(undefined4 *)((int)item + 0x18) = *(undefined4 *)((int)this + 8);
    iVar2 = *(int *)((int)this + 8) + 1;
    if (*(int *)((int)this + 0xc) < iVar2) {
      FUN_0099a050(iVar2,0);
    }
    puVar1 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 4);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = item;
      FUN_00999b80(item);
      return item;
    }
  }
  else {
    iVar2 = *priority;
    if ((iVar2 <= *(int *)((int)item + 0x1c)) && (*(int *)((int)item + 0x1c) <= iVar2)) {
      return item;
    }
    *(int *)((int)item + 0x1c) = iVar2;
  }
  FUN_00999b80(item);
  return item;
}

