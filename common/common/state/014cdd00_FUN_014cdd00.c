// addr: 0x014cdd00
// name: FUN_014cdd00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014cdd00(int *param_1,void *param_2)

{
  void *deserializer;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  
                    /* Deserializes an integer, a string, another integer, and a trailing string
                       after FUN_013b2910. Class identity is unknown. */
  deserializer = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  bVar1 = LobbyCommand_deserialize(param_1,deserializer);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(deserializer,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readString(deserializer,param_1 + 3);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(deserializer,param_1 + 10);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(deserializer,param_1 + 0xb);
          uVar3 = extraout_var_03;
          if (bVar1) {
            iVar2 = (**(code **)(*param_1 + 0x14))(deserializer);
            return iVar2;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

