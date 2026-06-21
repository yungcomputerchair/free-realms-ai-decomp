// addr: 0x0130c7c0
// name: FUN_0130c7c0
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0130c7c0(void *param_1,void *param_2)

{
  int iVar1;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  iVar1 = *(int *)((int)param_1 + 0x14);
  if (iVar1 != 0) {
    FUN_012cfde0(iVar1);
    FUN_012cc6b0(iVar1);
    FUN_01306030(param_1);
  }
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)param_2 + 0x18);
  Lobby_addChildLobby(param_2,param_1);
  return;
}

