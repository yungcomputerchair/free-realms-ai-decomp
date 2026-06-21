// addr: 0x014ed390
// name: AccountCommand_GetAccountInfo_addProperty
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandGetAccountInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_GetAccountInfo_addProperty(void * this, void * property)
    */

void __thiscall AccountCommand_GetAccountInfo_addProperty(void *this,void *property)

{
                    /* Checks that mPropertySet exists, then forwards the supplied property/value
                       object to the property-set helper. Evidence is the mPropertySet assert in
                       AccountCommandGetAccountInfo.cpp at line 0x1c. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\account_command\\AccountCommandGetAccountInfo.cpp",0x1c);
  }
  PropertySet_copyPropertiesFrom((int)property);
  return;
}

