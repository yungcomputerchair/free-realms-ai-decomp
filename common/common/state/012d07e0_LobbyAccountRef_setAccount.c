// addr: 0x012d07e0
// name: LobbyAccountRef_setAccount
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyAccountRef_setAccount(void * this, int accountId_) */

void __thiscall LobbyAccountRef_setAccount(void *this,int accountId_)

{
  undefined4 uVar1;
  
                    /* Sets field +4 to zero for null input, otherwise ensures lobby account storage
                       and stores a resolved account pointer/id from FUN_012df9f0. */
  if (accountId_ == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return;
  }
  LobbyAccount_ensureSingleton();
  uVar1 = FUN_012df9f0(accountId_);
  *(undefined4 *)((int)this + 4) = uVar1;
  return;
}

