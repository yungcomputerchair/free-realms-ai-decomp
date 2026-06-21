// addr: 0x014ebdd0
// name: AccountCommand_ModifyRestrictions_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandModifyRestrictions.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_ModifyRestrictions_cloneInto(void * this, void * target)
    */

void __thiscall AccountCommand_ModifyRestrictions_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_ModifyRestrictions, clones base
                       AccountCommand state, copies the scalar at offset 8, and copies the
                       container/member at offset 0xc. RTTI provides the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_ModifyRestrictions::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandModifyRestrictions.cpp",
                 0x39);
  }
  AccountCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  FUN_005f1e5c((int)this + 0xc);
  return;
}

