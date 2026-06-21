// addr: 0x00c8b190
// name: RecipeDataList_assign
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RecipeDataList_assign(void * this, void * other) */

void * __thiscall RecipeDataList_assign(void *this,void *other)

{
  int iVar1;
  
                    /* Assigns/copies a RecipeData list: clears existing nodes then appends copies
                       of each node from the source list. Recipe context comes from RecipeData
                       ctor/dtor neighbors. */
  if (this != other) {
    iVar1 = *(int *)((int)this + 4);
    while (iVar1 != 0) {
      FUN_008d9aa0(iVar1);
      iVar1 = *(int *)((int)this + 4);
    }
    for (iVar1 = *(int *)((int)other + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
      FUN_00c8aef0(iVar1);
    }
  }
  return this;
}

