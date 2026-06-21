// addr: 0x00907d00
// name: RecipeComponentDataList_dtor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RecipeComponentDataList_dtor(void * this) */

void __fastcall RecipeComponentDataList_dtor(void *this)

{
  int iVar1;
  
                    /* Destroys the embedded SoeUtil::List<RecipeComponentData,-1> by installing the
                       list vtable and removing every node. The list vtable gives the type. */
  iVar1 = *(int *)((int)this + 4);
  *(undefined ***)this = SoeUtil::List<RecipeComponentData,-1>::vftable;
  while (iVar1 != 0) {
    if (*(int *)((int)this + 4) != 0) {
      FUN_008d9aa0(*(int *)((int)this + 4));
    }
    iVar1 = *(int *)((int)this + 4);
  }
  return;
}

