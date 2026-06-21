// addr: 0x014c8710
// name: FUN_014c8710
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014c8710(int *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar3;
  int *local_4;
  
                    /* Deserializes three integer fields at this+8, +0xc, +0x10 and a boolean-like
                       integer stored at this+0x14. No class identity is visible. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar2 = LobbyCommand_deserialize(param_1,param_2);
  uVar4 = extraout_var;
  if (bVar2) {
    bVar2 = Deserializer_readInteger(param_2,param_1 + 2);
    uVar4 = extraout_var_00;
    if (bVar2) {
      bVar2 = Deserializer_readInteger(param_2,param_1 + 3);
      uVar4 = extraout_var_01;
      if (bVar2) {
        bVar2 = Deserializer_readInteger(param_2,param_1 + 4);
        uVar4 = extraout_var_02;
        if (bVar2) {
          bVar2 = Deserializer_readInteger(param_2,(int *)&local_4);
          uVar4 = extraout_var_03;
          if (bVar2) {
            pcVar1 = *(code **)(*param_1 + 0x14);
            *(bool *)(param_1 + 5) = local_4 != (int *)0x0;
            iVar3 = (*pcVar1)(param_2);
            return iVar3;
          }
        }
      }
    }
  }
  return (uint)uVar4 << 8;
}

