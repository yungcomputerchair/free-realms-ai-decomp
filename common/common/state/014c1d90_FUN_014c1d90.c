// addr: 0x014c1d90
// name: FUN_014c1d90
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_014c1d90(int *param_1,int *param_2)

{
  bool bVar1;
  int *local_4;
  
                    /* Runs a virtual begin hook, checks FUN_013b2910, then deserializes/loads a
                       compound member at this+8 via FUN_01300540 before the virtual post hook. No
                       class identity is visible. */
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

