// addr: 0x01407860
// name: AccountCommand_SetChallengeStatus_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandSetChallengeStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetChallengeStatus_cloneInto(void * this, void * target)
    */

void __thiscall AccountCommand_SetChallengeStatus_cloneInto(void *this,void *target)

{
  int iVar1;
  int iVar2;
  void *target_00;
  
                    /* Casts the target to AccountCommand_SetChallengeStatus, clones base
                       AccountCommand state, then iterates the source challenge-status map/list and
                       copies entries through helper routines. RTTI identifies the class. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_SetChallengeStatus::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandSetChallengeStatus.cpp",
                 0x4f);
  }
  AccountCommand_cloneInto(this,target_00);
  if (this == (void *)0xffffffe8) {
    FUN_00d83c2d();
  }
  iVar1 = **(int **)((int)this + 0x1c);
  while( true ) {
    iVar2 = *(int *)((int)this + 0x1c);
    if (this == (void *)0xffffffe8) {
      FUN_00d83c2d();
    }
    if (iVar1 == iVar2) break;
    if (this == (void *)0xffffffe8) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)((int)this + 0x1c)) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)((int)this + 0x1c)) {
      FUN_00d83c2d();
    }
    FUN_01407760(iVar1 + 0xc,*(undefined4 *)(iVar1 + 0x28));
    FUN_0131d920();
  }
  return;
}

