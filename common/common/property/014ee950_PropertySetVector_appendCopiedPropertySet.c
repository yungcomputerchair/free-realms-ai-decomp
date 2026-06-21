// addr: 0x014ee950
// name: PropertySetVector_appendCopiedPropertySet
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySetVector_appendCopiedPropertySet(void * vector, void * arg2,
   void * arg3, void * source_set, void * arg5) */

void __thiscall
PropertySetVector_appendCopiedPropertySet
          (void *this,void *vector,void *arg2,void *arg3,void *source_set,void *arg5)

{
  void *element;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a new PropertySet, copies properties from a source set, and pushes
                       the new PropertySet pointer into a vector. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b187b;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_c;
  FUN_0042c155(&vector);
  StdVector28_pushBack((void *)((int)this + 0x18),arg5,element);
  StdVector28_pushBack((void *)((int)this + 0x28),arg2,element);
  StdVector_PropertySetPtr_pushBackSlow((void *)((int)this + 0x38),&arg3);
  vector = Mem_Alloc(0x10);
  local_4 = 0;
  if (vector == (void *)0x0) {
    vector = (void *)0x0;
  }
  else {
    vector = PropertySet_ctor(vector);
  }
  local_4 = 0xffffffff;
  PropertySet_copyPropertiesFrom((int)source_set);
  StdVector_PropertySetPtr_pushBack((void *)((int)this + 0x48),&vector);
  ExceptionList = local_c;
  return;
}

