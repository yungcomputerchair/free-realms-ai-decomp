// addr: 0x005e8377
// name: RbTree_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree_clear(void * this) */

void __fastcall RbTree_clear(void *this)

{
  int *piVar1;
  
                    /* Clears all nodes below the tree header, then resets the header links and node
                       count to the empty-tree state. */
  piVar1 = (int *)((int)this + 4);
  FUN_005e6699(*(undefined4 *)(*piVar1 + 4));
  *(int *)(*piVar1 + 4) = *piVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)*piVar1 = *piVar1;
  *(int *)(*piVar1 + 8) = *piVar1;
  return;
}

