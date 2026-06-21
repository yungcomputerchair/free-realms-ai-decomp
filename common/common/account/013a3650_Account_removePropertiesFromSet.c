// addr: 0x013a3650
// name: Account_removePropertiesFromSet
// subsystem: common/common/account
// source (binary assert): common/common/account/Account.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Account_removePropertiesFromSet(void * this, void * propertySet) */

void __thiscall Account_removePropertiesFromSet(void *this,void *propertySet)

{
                    /* Forwards a supplied PropertySet to the Account backing PropertySet
                       removal/filter helper after verifying mPropertySet exists. The source
                       PropertySet parameter is not recovered cleanly in the decompiler, but the
                       callee iterates a second property set against the destination set. */
  if (*(int *)((int)this + 0x50) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\account\\Account.cpp",0x15b);
  }
  PropertySet_removePropertiesFromSet(propertySet,*(void **)((int)this + 0x50));
  return;
}

