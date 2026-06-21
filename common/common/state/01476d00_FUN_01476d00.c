// addr: 0x01476d00
// name: FUN_01476d00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01476d00(int *param_1,void *param_2)

{
  code *pcVar1;
  char extraout_AL;
  bool bVar2;
  char extraout_AL_00;
  char extraout_AL_01;
  char extraout_AL_02;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  int iVar3;
  int unaff_ESI;
  void *pvVar5;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined1 local_4 [4];
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  puStack_18 = local_4;
  pvStack_1c = param_2;
  (**(code **)(*param_1 + 0x10))();
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    bVar2 = StateMachineState_deserializeWithPlayer(param_1,param_2);
    uVar4 = extraout_var_00;
    if (bVar2) {
      Deserializer_readInteger(param_2,param_1 + 0x3e);
      pvVar5 = param_2;
      (**(code **)(param_1[0x3f] + 0x24))();
      uVar4 = extraout_var_01;
      if (extraout_AL_00 != '\0') {
        (**(code **)(param_1[0x42] + 0x24))(param_2);
        uVar4 = extraout_var_02;
        if (extraout_AL_01 != '\0') {
          (**(code **)(param_1[0x45] + 0x24))(param_2);
          uVar4 = extraout_var_03;
          if (extraout_AL_02 != '\0') {
            bVar2 = Deserializer_readInteger(param_2,param_1 + 0x48);
            uVar4 = extraout_var_04;
            if (bVar2) {
              bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
              uVar4 = extraout_var_05;
              if (bVar2) {
                param_1[0x49] = unaff_ESI;
                bVar2 = Deserializer_readInteger(param_2,(int *)&stack0xffffffe0);
                uVar4 = extraout_var_06;
                if (bVar2) {
                  *(bool *)(param_1 + 0x4a) = pvVar5 != (void *)0x0;
                  bVar2 = Deserializer_readInteger(param_2,(int *)&pvStack_1c);
                  uVar4 = extraout_var_07;
                  if (bVar2) {
                    pcVar1 = *(code **)(*param_1 + 0x14);
                    *(bool *)((int)param_1 + 0x129) = pvStack_1c != (void *)0x0;
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
  }
  return (uint)uVar4 << 8;
}

