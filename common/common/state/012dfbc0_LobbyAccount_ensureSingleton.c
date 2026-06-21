// addr: 0x012dfbc0
// name: LobbyAccount_ensureSingleton
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyAccount_ensureSingleton(void) */

void LobbyAccount_ensureSingleton(void)

{
  void *accountId_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and constructs the global lobby account object using
                       LobbyAccount_validateOrInit. Evidence is the identified callee and
                       lobby/account callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167180b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd6ac == 0) {
    accountId_ = Mem_Alloc(0xc);
    local_4 = 0;
    if (accountId_ == (void *)0x0) {
      DAT_01cbd6ac = 0;
    }
    else {
      DAT_01cbd6ac = LobbyAccount_validateOrInit((uint)accountId_);
    }
  }
  ExceptionList = local_c;
  return;
}

