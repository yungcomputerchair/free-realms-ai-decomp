// addr: 0x01311020
// name: PropertySetTree_clearAndDeleteValues
// subsystem: common/common/account
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySetTree_clearAndDeleteValues(void * tree) */

void __fastcall PropertySetTree_clearAndDeleteValues(void *tree)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
                    /* Clears a property-set tree, invoking the virtual destructor/delete function
                       for each non-null value pointer at node+0x10, erasing nodes, freeing the
                       root, and resetting the sentinel links and count. */
  local_4 = **(int **)((int)tree + 8);
  local_8 = (int)tree + 4;
  while( true ) {
    iVar3 = local_4;
    iVar2 = local_8;
    iVar1 = *(int *)((int)tree + 8);
    if ((local_8 == 0) || (local_8 != (int)tree + 4)) {
      FUN_00d83c2d();
    }
    if (iVar3 == iVar1) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (iVar3 == *(int *)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(iVar3 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar3 + 0x10))(1);
    }
    RBTreeIterator_increment(&local_8);
  }
  _Memory = *(void **)(*(int *)((int)tree + 8) + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    StdTree_eraseSubtreeNodes(*(void **)((int)_Memory + 8));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(int *)(*(int *)((int)tree + 8) + 4) = *(int *)((int)tree + 8);
  *(undefined4 *)((int)tree + 0xc) = 0;
  *(undefined4 *)*(undefined4 *)((int)tree + 8) = *(undefined4 *)((int)tree + 8);
  *(int *)(*(int *)((int)tree + 8) + 8) = *(int *)((int)tree + 8);
  return;
}

