// addr: 0x014ed4f0
// name: AccountCommand_GetAccountInfo_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandGetAccountInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_GetAccountInfo_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_GetAccountInfo_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_GetAccountInfo, clones base state, copies
                       the property set via helper, and copies the scalar at offset 0xc. RTTI
                       identifies the class. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_GetAccountInfo::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\account_command\\AccountCommandGetAccountInfo.cpp"
                 ,0x48);
  }
  AccountCommand_cloneInto(this,target_00);
  PropertySet_copyPropertiesFrom(*(int *)((int)this + 8));
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

