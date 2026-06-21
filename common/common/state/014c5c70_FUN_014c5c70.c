// addr: 0x014c5c70
// name: FUN_014c5c70
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014c5c70(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  undefined1 *puStack_14;
  int iStack_8;
  undefined1 local_4 [4];
  
                    /* Deserializes through a nested object at this+8 (vtable slot +0x24), then
                       reads integers into this+0xc and this+0x10 before the virtual post hook.
                       Class identity is not visible. */
  puStack_14 = local_4;
  (**(code **)(*param_1 + 0x10))(param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = LobbyCommand_deserialize(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      (**(code **)(*(int *)param_1[2] + 0x24))(param_2);
      uVar3 = extraout_var_01;
      if (extraout_AL_00 != '\0') {
        bVar1 = Deserializer_readInteger(param_2,&iStack_8);
        uVar3 = extraout_var_02;
        if (bVar1) {
          param_1[3] = iStack_8;
          bVar1 = Deserializer_readInteger(param_2,(int *)&puStack_14);
          uVar3 = extraout_var_03;
          if (bVar1) {
            param_1[4] = (int)puStack_14;
            iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
            return iVar2;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

