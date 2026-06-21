// addr: 0x01408790
// name: AccountCommand_SetPreferences_addProperty
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandSetPreferences.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetPreferences_addProperty(void * this, void * property)
    */

void __thiscall AccountCommand_SetPreferences_addProperty(void *this,void *property)

{
                    /* Checks that mPropertySet exists, then forwards the supplied property/value
                       object to the property-set helper. Evidence is the mPropertySet assert in
                       AccountCommandSetPreferences.cpp at line 0x1d and use from SetPreferences
                       construction code. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\account_command\\AccountCommandSetPreferences.cpp",0x1d);
  }
  PropertySet_copyPropertiesFrom((int)property);
  return;
}

