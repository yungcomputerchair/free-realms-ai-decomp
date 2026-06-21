// addr: 0x014bc220
// name: FUN_014bc220
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014bc220(int *param_1,void *param_2)

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
  int unaff_ESI;
  
                    /* Deserializes integer fields at this+8, +0x10, +0xc and, for newer versions,
                       +0x14 after FUN_013b2910. No class identity is visible. */
  deserializer = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  bVar1 = LobbyCommand_deserialize(param_1,deserializer);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(deserializer,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(deserializer,param_1 + 4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(deserializer,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          if (1 < unaff_ESI) {
            bVar1 = Deserializer_readInteger(deserializer,param_1 + 5);
            uVar3 = extraout_var_03;
            if (!bVar1) goto LAB_014bc243;
          }
          iVar2 = (**(code **)(*param_1 + 0x14))(deserializer);
          return iVar2;
        }
      }
    }
  }
LAB_014bc243:
  return (uint)uVar3 << 8;
}

