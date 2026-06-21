// addr: 0x0141ac40
// name: GameCommand_deserializeComponentAndArgs
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall GameCommand_deserializeComponentAndArgs(int *param_1,void *param_2)

{
  code *pcVar1;
  void *stream;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar3;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_10;
  int aiStack_c [2];
  int iStack_4;
  
                    /* Deserializes common GameCommand data, reads component/network-command pointer
                       data, reads two integers, and stores them through
                       CommandObject_setFirstIntArg and setSecondIntArg. */
  stream = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    GameCommand_deserializeCommon(stream);
    uVar4 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      if (iStack_4 < 3) {
        bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffe8);
        uVar4 = extraout_var_01;
        if (bVar2) {
          CommandObject_setFirstIntArg(param_1,unaff_EDI);
          bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffec);
          uVar4 = extraout_var_02;
          if (bVar2) {
            CommandObject_setSecondIntArg(param_1,unaff_ESI);
            iVar3 = (**(code **)(*param_1 + 0x14))(stream);
            return iVar3;
          }
        }
      }
      else {
        bVar2 = NetworkCommand_deserializeComponentPtr(stream,(void **)(param_1 + 0xc));
        uVar4 = extraout_var_03;
        if (bVar2) {
          bVar2 = NetworkCommand_deserializeComponentPtr(stream,(void **)(param_1 + 0xd));
          uVar4 = extraout_var_04;
          if (bVar2) {
            bVar2 = Deserializer_readInteger(stream,param_1 + 9);
            uVar4 = extraout_var_05;
            if (bVar2) {
              bVar2 = Deserializer_readInteger(stream,&iStack_10);
              uVar4 = extraout_var_06;
              if (bVar2) {
                param_1[10] = iStack_10;
                bVar2 = Deserializer_readInteger(stream,aiStack_c);
                uVar4 = extraout_var_07;
                if (bVar2) {
                  pcVar1 = *(code **)(*param_1 + 0x14);
                  param_1[0xb] = aiStack_c[0];
                  iVar3 = (*pcVar1)(stream);
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

