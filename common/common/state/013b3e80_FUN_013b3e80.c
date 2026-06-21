// addr: 0x013b3e80
// name: FUN_013b3e80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013b3e80(int *param_1,void *param_2)

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
  int unaff_ESI;
  int unaff_EDI;
  int iStack_4;
  
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
      bVar1 = Deserializer_readInteger(deserializer,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(deserializer,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(deserializer,(int *)&stack0xfffffff0);
          uVar3 = extraout_var_03;
          if (bVar1) {
            param_1[4] = unaff_EDI;
            bVar1 = Deserializer_readString(deserializer,param_1 + 5);
            uVar3 = extraout_var_04;
            if (bVar1) {
              if (1 < iStack_4) {
                bVar1 = Deserializer_readInteger(deserializer,(int *)&stack0xfffffff4);
                uVar3 = extraout_var_05;
                if (!bVar1) goto LAB_013b3e9e;
                *(bool *)(param_1 + 0xc) = unaff_ESI != 0;
              }
              if (2 < iStack_4) {
                bVar1 = Deserializer_readInteger(deserializer,param_1 + 0xd);
                uVar3 = extraout_var_06;
                if (!bVar1) goto LAB_013b3e9e;
              }
              iVar2 = (**(code **)(*param_1 + 0x14))(deserializer);
              return iVar2;
            }
          }
        }
      }
    }
  }
LAB_013b3e9e:
  return (uint)uVar3 << 8;
}

