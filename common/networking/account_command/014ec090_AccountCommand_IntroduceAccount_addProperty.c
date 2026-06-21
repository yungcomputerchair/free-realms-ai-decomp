// addr: 0x014ec090
// name: AccountCommand_IntroduceAccount_addProperty
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandIntroduceAccount.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_IntroduceAccount_addProperty(void * this, void * property)
    */

void __thiscall AccountCommand_IntroduceAccount_addProperty(void *this,void *property)

{
                    /* Checks the IntroduceAccount mPropertySet pointer at offset 0x44, then
                       forwards the provided property/value object to the property-set helper.
                       Evidence is the mPropertySet assert in AccountCommandIntroduceAccount.cpp at
                       line 0x3d. */
  if (*(int *)((int)this + 0x44) == 0) {
    FUN_012f5a60("mPropertySet",
                 "..\\common\\networking\\account_command\\AccountCommandIntroduceAccount.cpp",0x3d)
    ;
  }
  PropertySet_copyPropertiesFrom((int)property);
  return;
}

