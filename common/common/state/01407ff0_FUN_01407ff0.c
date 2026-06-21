// addr: 0x01407ff0
// name: FUN_01407ff0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01407ff0(int *param_1,void *param_2)

{
  char extraout_AL;
  char extraout_AL_00;
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
  int *local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_01407cf0(param_2);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readInteger(param_2,(int *)&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        param_1[2] = (int)local_4;
        bVar1 = Deserializer_readInteger(param_2,(int *)&local_4);
        uVar3 = extraout_var_02;
        if (bVar1) {
          param_1[3] = (int)local_4;
          bVar1 = Deserializer_readInteger(param_2,(int *)&local_4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            param_1[4] = (int)local_4;
            bVar1 = Deserializer_readInteger(param_2,(int *)&local_4);
            uVar3 = extraout_var_04;
            if (bVar1) {
              param_1[5] = (int)local_4;
              bVar1 = Deserializer_readInteger(param_2,(int *)&local_4);
              uVar3 = extraout_var_05;
              if (bVar1) {
                param_1[6] = (int)local_4;
                bVar1 = Deserializer_readString(param_2,param_1 + 7);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
                  return iVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

