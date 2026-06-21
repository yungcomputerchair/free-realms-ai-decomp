// addr: 0x01531620
// name: GameCommand_deserializeObjectIdsAndString_01531620
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall GameCommand_deserializeObjectIdsAndString_01531620(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  char extraout_AL_01;
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
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes a command payload with integer fields, a string, and a
                       GameObjectId vector, with version checks controlling later fields. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StreamAdapter_readThenCommit(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_2,param_1 + 9);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
          uVar3 = extraout_var_03;
          if (bVar1) {
            *(bool *)(param_1 + 10) = unaff_EDI != 0;
            bVar1 = Deserializer_readInteger(param_2,param_1 + 0xb);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,param_1 + 0xc);
              uVar3 = extraout_var_05;
              if (bVar1) {
                bVar1 = Deserializer_readInteger(param_2,param_1 + 0xd);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  bVar1 = Deserializer_readInteger(param_2,param_1 + 0xe);
                  uVar3 = extraout_var_07;
                  if (bVar1) {
                    bVar1 = Deserializer_readString(param_2,param_1 + 0xf);
                    uVar3 = extraout_var_08;
                    if (bVar1) {
                      bVar1 = Deserializer_readString(param_2,param_1 + 0x16);
                      uVar3 = extraout_var_09;
                      if (bVar1) {
                        local_4 = param_2;
                        FUN_01244910();
                        GameObjectIdVector_deserialize(param_1 + 3);
                        uVar3 = extraout_var_10;
                        if (extraout_AL_00 != '\0') {
                          FUN_01244910();
                          GameObjectIdVector_deserialize(param_1 + 6);
                          uVar3 = extraout_var_11;
                          if (extraout_AL_01 != '\0') {
                            if (unaff_ESI < 2) {
LAB_01531758:
                              iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
                              return iVar2;
                            }
                            bVar1 = Deserializer_readInteger(param_2,param_1 + 0x1d);
                            uVar3 = extraout_var_12;
                            if (bVar1) {
                              bVar1 = Deserializer_readInteger(param_2,param_1 + 0x1e);
                              uVar3 = extraout_var_13;
                              if (bVar1) goto LAB_01531758;
                            }
                          }
                        }
                        return (uint)uVar3 << 8;
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
  return (uint)uVar3 << 8;
}

