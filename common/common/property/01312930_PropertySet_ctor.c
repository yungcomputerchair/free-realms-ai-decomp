// addr: 0x01312930
// name: PropertySet_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertySet_ctor(void * this) */

void * __fastcall PropertySet_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for PropertySet: initializes base vftables for
                       PersistentBase/PersistentComponent, installs PropertySet::vftable, and
                       constructs the property tree via PropertySet_propertyTreeCtor. The vftable
                       symbols provide the class and base evidence. */
  puStack_8 = &LAB_0167762b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  local_4 = 1;
  *(undefined ***)this = PropertySet::vftable;
  PropertySet_propertyTreeCtor((void *)((int)this + 4));
  ExceptionList = local_c;
  return this;
}

