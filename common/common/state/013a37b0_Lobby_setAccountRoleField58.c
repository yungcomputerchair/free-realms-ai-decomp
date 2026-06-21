// addr: 0x013a37b0
// name: Lobby_setAccountRoleField58
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Lobby_setAccountRoleField58(int param_1,undefined4 param_2)

{
                    /* Stores a value at lobby/account field 0x58. Lobby_setAccountRole calls it, so
                       it likely records the account role or related lobby attribute. */
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}

