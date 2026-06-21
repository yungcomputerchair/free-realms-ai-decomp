// addr: 0x0152e250
// name: FUN_0152e250
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0152e250(int *param_1,void *param_2)

{
  void *value;
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
  uint3 extraout_var_07;
  uint3 extraout_var_08;
  uint3 extraout_var_09;
  uint3 extraout_var_10;
  uint3 extraout_var_11;
  uint3 extraout_var_12;
  uint3 extraout_var_13;
  uint3 extraout_var_14;
  int iVar2;
  int unaff_ESI;
  
                    /* Generic command/query deserializer: reads integer or string fields with hooks
                       and/or nested payloads, but no strings/RTTI identify the exact command or
                       query class. */
  value = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StreamAdapter_readThenCommit(param_1,value);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(value,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(value,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(value,param_1 + 4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(value,param_1 + 5);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(value,param_1 + 6);
              uVar3 = extraout_var_05;
              if (bVar1) {
                bVar1 = Deserializer_readInteger(value,param_1 + 7);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  bVar1 = Deserializer_readInteger(value,param_1 + 9);
                  uVar3 = extraout_var_07;
                  if (bVar1) {
                    bVar1 = Deserializer_readInteger(value,param_1 + 10);
                    uVar3 = extraout_var_08;
                    if (bVar1) {
                      bVar1 = Deserializer_readInteger(value,param_1 + 0xb);
                      uVar3 = extraout_var_09;
                      if (bVar1) {
                        bVar1 = Deserializer_readInteger(value,param_1 + 0xc);
                        uVar3 = extraout_var_10;
                        if (bVar1) {
                          bVar1 = Deserializer_readInteger(value,param_1 + 0xd);
                          uVar3 = extraout_var_11;
                          if (bVar1) {
                            bVar1 = Deserializer_readInteger(value,param_1 + 0xe);
                            uVar3 = extraout_var_12;
                            if (bVar1) {
                              bVar1 = Deserializer_readInteger(value,param_1 + 0xf);
                              uVar3 = extraout_var_13;
                              if (bVar1) {
                                if (1 < unaff_ESI) {
                                  bVar1 = Deserializer_readInteger(value,param_1 + 8);
                                  uVar3 = extraout_var_14;
                                  if (!bVar1) goto LAB_0152e26b;
                                }
                                iVar2 = (**(code **)(*param_1 + 0x14))(value);
                                return iVar2;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0152e26b:
  return (uint)uVar3 << 8;
}

