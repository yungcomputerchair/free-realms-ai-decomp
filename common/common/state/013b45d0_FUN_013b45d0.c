// addr: 0x013b45d0
// name: FUN_013b45d0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013b45d0(int *param_1,void *param_2)

{
  void *deserializer;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  int iVar2;
  int unaff_EDI;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  deserializer = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = LobbyCommand_deserialize(param_1,deserializer);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readString(deserializer,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readString(deserializer,param_1 + 9);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(deserializer,param_1 + 0x10);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readString(deserializer,param_1 + 0x17);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readString(deserializer,param_1 + 0x1e);
              uVar3 = extraout_var_05;
              if (bVar1) {
                if (1 < (int)param_1) {
                  bVar1 = Deserializer_readInteger(deserializer,(int *)&stack0xfffffff4);
                  uVar3 = extraout_var_06;
                  if (!bVar1) goto LAB_013b45ec;
                  *(bool *)(param_1 + 0x25) = unaff_EDI != 0;
                }
                iVar2 = (**(code **)(*param_1 + 0x14))(deserializer);
                return iVar2;
              }
            }
          }
        }
      }
    }
  }
LAB_013b45ec:
  return (uint)uVar3 << 8;
}

