// addr: 0x01321b30
// name: AccountCommand_SetCampaignStatus_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandSetCampaignStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetCampaignStatus_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_SetCampaignStatus_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target NetworkCommand to AccountCommand_SetCampaignStatus, asserts
                       on failure, invokes the AccountCommand base clone, and copies four scalar
                       fields. RTTI names the class and the assert string is clone in
                       AccountCommandSetCampaignStatus.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_SetCampaignStatus::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandSetCampaignStatus.cpp",0x4e
                );
  }
  AccountCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)target_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)target_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  return;
}

