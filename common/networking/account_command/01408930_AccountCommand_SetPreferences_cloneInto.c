// addr: 0x01408930
// name: AccountCommand_SetPreferences_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandSetPreferences.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetPreferences_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_SetPreferences_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_SetPreferences, clones base AccountCommand
                       state, and copies the property set through the shared property-set helper.
                       RTTI identifies the class. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_SetPreferences::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\account_command\\AccountCommandSetPreferences.cpp"
                 ,0x49);
  }
  AccountCommand_cloneInto(this,target_00);
  PropertySet_copyPropertiesFrom(*(int *)((int)this + 8));
  return;
}

