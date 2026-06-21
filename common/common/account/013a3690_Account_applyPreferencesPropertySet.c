// addr: 0x013a3690
// name: Account_applyPreferencesPropertySet
// subsystem: common/common/account
// source (binary assert): common/common/account/Account.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Account_applyPreferencesPropertySet(void * this, void * propertySet) */

bool __thiscall Account_applyPreferencesPropertySet(void *this,void *propertySet)

{
                    /* Applies account preferences by copying properties from the supplied
                       PropertySet into the Account backing PropertySet without first clearing
                       existing entries. */
  if (*(int *)((int)this + 0x50) == 0) {
    FUN_012f5a60("mPropertySet","..\\common\\common\\account\\Account.cpp",0x161);
  }
  if (propertySet == (void *)0x0) {
    FUN_012f5a60("propertySet","..\\common\\common\\account\\Account.cpp",0x162);
  }
  PropertySet_copyPropertiesFrom((int)propertySet);
  return true;
}

