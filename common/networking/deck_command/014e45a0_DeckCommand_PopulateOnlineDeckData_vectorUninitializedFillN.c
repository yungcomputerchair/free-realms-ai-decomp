// addr: 0x014e45a0
// name: DeckCommand_PopulateOnlineDeckData_vectorUninitializedFillN
// subsystem: common/networking/deck_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 *
DeckCommand_PopulateOnlineDeckData_vectorUninitializedFillN
          (undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return param_1 + param_2;
}

