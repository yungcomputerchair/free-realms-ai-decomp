// addr: 0x00909b90
// name: RecipeData_dtor
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RecipeData_dtor(void * this) */

void __fastcall RecipeData_dtor(void *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a RecipeData-like object by clearing its embedded
                       RecipeComponentData list at +0x30 and restoring Loggable vtable. Called by
                       SelfObject_ParseFromBlob and recipe-related helpers. */
  local_c = ExceptionList;
  puStack_8 = &LAB_0158b91e;
  ExceptionList = &local_c;
  local_4 = 0;
  iVar1 = *(int *)((int)this + 0x34);
  *(undefined ***)((int)this + 0x30) = SoeUtil::List<RecipeComponentData,-1>::vftable;
  while (iVar1 != 0) {
    if (*(int *)((int)this + 0x34) != 0) {
      FUN_008d9aa0(*(int *)((int)this + 0x34));
    }
    iVar1 = *(int *)((int)this + 0x34);
  }
  *(undefined ***)((int)this + 0xc) = Loggable::vftable;
  ExceptionList = local_c;
  return;
}

