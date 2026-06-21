// addr: 0x01301f90
// name: PropertySetHolder_clonePropertyIntoSet
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySetHolder_clonePropertyIntoSet(void * this, void * property, void
   * value) */

void __thiscall PropertySetHolder_clonePropertyIntoSet(void *this,void *property,void *value)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures the object owns a PropertySet at offset 0x2c and then clones/inserts
                       a property value with Property_cloneIfPresent. Evidence is lazy
                       Mem_Alloc(0x10), PropertySet_ctor, and Property_cloneIfPresent call. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675dab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x2c) == 0) {
    pvVar1 = Mem_Alloc(0x10);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = PropertySet_ctor(pvVar1);
    }
    *(void **)((int)this + 0x2c) = pvVar1;
  }
  local_4 = 0xffffffff;
  Property_cloneIfPresent(property,value);
  ExceptionList = local_c;
  return;
}

