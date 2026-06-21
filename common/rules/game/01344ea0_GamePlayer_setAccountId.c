// addr: 0x01344ea0
// name: GamePlayer_setAccountId
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall GamePlayer_setAccountId(int param_1,undefined4 param_2)

{
  void *map;
  void *pvVar1;
  undefined4 uVar2;
  int key_;
  
                    /* Stores an account id at offset 0x38 and, if a LobbyAccount exists for it,
                       stores account-derived data at offset 0x44. Evidence: calls
                       LobbyAccount_ensureSingleton and LobbyServiceAccountMap_findValue. */
  *(undefined4 *)(param_1 + 0x38) = param_2;
  LobbyAccount_ensureSingleton();
  pvVar1 = LobbyServiceAccountMap_findValue(map,key_);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_013a36e0();
    *(undefined4 *)(param_1 + 0x44) = uVar2;
  }
  return;
}

