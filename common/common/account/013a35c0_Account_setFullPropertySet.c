// addr: 0x013a35c0
// name: Account_setFullPropertySet
// subsystem: common/common/account
// source (binary assert): common/common/account/Account.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Account_setFullPropertySet(void * this, void * propertySet) */

bool __thiscall Account_setFullPropertySet(void *this,void *propertySet)

{
                    /* Replaces the Account backing PropertySet contents by clearing the current set
                       and then copying all properties from the supplied PropertySet. */
  if (*(int *)((int)this + 0x50) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\account\\Account.cpp",0x138);
  }
  if (propertySet == (void *)0x0) {
    FUN_012f5a60("propertySet","..\\common\\common\\account\\Account.cpp",0x139);
  }
  PropertySetTree_clearAndDeleteValues(*(void **)((int)this + 0x50));
  PropertySet_copyPropertiesFrom((int)propertySet);
  return true;
}

