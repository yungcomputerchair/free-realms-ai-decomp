// addr: 0x014c2870
// name: FUN_014c2870
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_014c2870(int *param_1,int *param_2)

{
  bool bVar1;
  int *local_4;
  
                    /* Loads/deserializes a compound member at this+8 with FUN_01300540 after the
                       common FUN_013b2910 check, then finishes through the virtual post hook. No
                       safe name is available. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = LobbyCommand_deserialize(param_1,param_2);
  if (!bVar1) {
    return;
  }
  local_4 = param_2;
  Deserializer_readIntegerVector(&local_4,param_1 + 2);
  (**(code **)(*param_1 + 0x14))(param_2);
  return;
}

