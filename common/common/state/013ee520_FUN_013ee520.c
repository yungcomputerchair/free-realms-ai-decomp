// addr: 0x013ee520
// name: FUN_013ee520
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013ee520(int *param_1,void *param_2)

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
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  int iVar3;
  int unaff_EDI;
  int local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    NetworkCommand_deserializeFieldTemplate(param_2);
    uVar4 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar2 = Deserializer_readString(param_2,param_1 + 1);
      uVar4 = extraout_var_01;
      if (bVar2) {
        bVar2 = Deserializer_readString(param_2,param_1 + 8);
        uVar4 = extraout_var_02;
        if (bVar2) {
          bVar2 = Deserializer_readString(param_2,param_1 + 0xf);
          uVar4 = extraout_var_03;
          if (bVar2) {
            bVar2 = Deserializer_readInteger(param_2,param_1 + 0x16);
            uVar4 = extraout_var_04;
            if (bVar2) {
              bVar2 = Deserializer_readInteger(param_2,&local_4);
              uVar4 = extraout_var_05;
              if (bVar2) {
                *(bool *)(param_1 + 0x17) = local_4 != 0;
                bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
                uVar4 = extraout_var_06;
                if (bVar2) {
                  pcVar1 = *(code **)(*param_1 + 0x14);
                  param_1[0x18] = unaff_EDI;
                  iVar3 = (*pcVar1)(param_2);
                  return iVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  return (uint)uVar4 << 8;
}

