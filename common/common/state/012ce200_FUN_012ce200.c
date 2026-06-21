// addr: 0x012ce200
// name: FUN_012ce200
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_012ce200(int param_1)

{
  void *map;
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int key_;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  LobbyAccount_ensureSingleton();
  pvVar1 = LobbyServiceAccountMap_findValue(map,key_);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_013a3a30();
    uVar3 = FUN_013a3a20();
    uVar2 = FUN_012cd590(param_1 + 0x20,uVar3,uVar2);
    return uVar2;
  }
  return 0;
}

