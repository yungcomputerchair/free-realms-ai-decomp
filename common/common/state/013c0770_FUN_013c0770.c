// addr: 0x013c0770
// name: FUN_013c0770
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013c0770(int *param_1,void *param_2)

{
  code *pcVar1;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  int iVar3;
  int *local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_013bcf60(param_2);
    uVar4 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar2 = Deserializer_readInteger(param_2,param_1 + 0x11);
      uVar4 = extraout_var_01;
      if (bVar2) {
        bVar2 = Deserializer_readString(param_2,param_1 + 0x13);
        uVar4 = extraout_var_02;
        if (bVar2) {
          bVar2 = Deserializer_readString(param_2,param_1 + 0x1a);
          uVar4 = extraout_var_03;
          if (bVar2) {
            bVar2 = Deserializer_readInteger(param_2,(int *)&local_4);
            uVar4 = extraout_var_04;
            if (bVar2) {
              pcVar1 = *(code **)(*param_1 + 0x14);
              *(bool *)(param_1 + 0x12) = local_4 != (int *)0x0;
              iVar3 = (*pcVar1)(param_2);
              return iVar3;
            }
          }
        }
      }
    }
  }
  return (uint)uVar4 << 8;
}

