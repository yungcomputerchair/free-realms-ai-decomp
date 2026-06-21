// addr: 0x00909380
// name: RecipeComponentDataList_deletingDtor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RecipeComponentDataList_deletingDtor(void * this, byte flags_) */

void * __thiscall RecipeComponentDataList_deletingDtor(void *this,byte flags_)

{
  int iVar1;
  
                    /* Deleting destructor for SoeUtil::List<RecipeComponentData,-1>: clears all
                       nodes and frees the list object when the low flag bit is set. The list vtable
                       gives the type. */
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = SoeUtil::List<RecipeComponentData,-1>::vftable;
  while (iVar1 != 0) {
    if (*(int *)((int)this + 4) != 0) {
      FUN_008d9aa0(*(int *)((int)this + 4));
    }
    iVar1 = *(int *)((int)this + 4);
  }
  if ((flags_ & 1) == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(this);
}

