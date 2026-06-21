// addr: 0x013bcf60
// name: FUN_013bcf60
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013bcf60(int *param_1,void *param_2)

{
  void *reader;
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
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    NetworkCommand_deserializeTemplate(param_1,reader);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readInteger(reader,param_1 + 1);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(reader,param_1 + 2);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(reader,param_1 + 3);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readString(reader,param_1 + 10);
            uVar3 = extraout_var_04;
            if (bVar1) {
              iVar2 = (**(code **)(*param_1 + 0x14))(reader);
              return iVar2;
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

