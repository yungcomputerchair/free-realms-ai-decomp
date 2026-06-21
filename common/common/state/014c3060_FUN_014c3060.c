// addr: 0x014c3060
// name: FUN_014c3060
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014c3060(int *param_1,void *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  int *local_4;
  
                    /* Deserializes an integer at this+8 and then a second integer temporary that is
                       normalized to a bool stored at this+0xc. Class identity is unknown. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = LobbyCommand_deserialize(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,(int *)&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        *(undefined1 *)(param_1 + 3) = 0;
        if (local_4 != (int *)0x0) {
          *(undefined1 *)(param_1 + 3) = 1;
        }
        iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

