// addr: 0x014ef3b0
// name: AccountCommand_BulkBriefIntroduceAccount_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandBulkBriefIntroduceAccount.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_BulkBriefIntroduceAccount_cloneInto(void * this, void *
   target) */

void __thiscall AccountCommand_BulkBriefIntroduceAccount_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_BulkBriefIntroduceAccount, clones base
                       state, and copies the request container plus two vector-like members. RTTI
                       provides the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_BulkBriefIntroduceAccount::RTTI_Type_Descriptor,0
                                  );
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandBulkBriefIntroduceAccount.cpp"
                 ,0x53);
  }
  AccountCommand_cloneInto(this,target_00);
  FUN_005f1e5c((int)this + 8);
  StdVector28_assign((int)this + 0x18);
  StdVector28_assign((int)this + 0x28);
  return;
}

