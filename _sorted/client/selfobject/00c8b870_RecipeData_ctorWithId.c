// addr: 0x00c8b870
// name: RecipeData_ctorWithId
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RecipeData_ctorWithId(void * this, uint * id) */

void * __thiscall RecipeData_ctorWithId(void *this,uint *id)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a RecipeData object and stores the supplied id/key at offset
                       +0x48. RecipeData_ctor callee gives the type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01605e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RecipeData_ctor(this);
  *(uint *)((int)this + 0x48) = *id;
  ExceptionList = local_c;
  return this;
}

