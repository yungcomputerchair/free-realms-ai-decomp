// addr: 0x012df9a0
// name: LobbyAccount_validateOrInit
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LobbyAccount_validateOrInit(uint accountId_) */

uint __fastcall LobbyAccount_validateOrInit(uint accountId_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Runs a small initialization/validation helper and returns the original
                       argument unchanged. It is used by account lookup code before account
                       validation. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016717a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012df890(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return accountId_;
}

