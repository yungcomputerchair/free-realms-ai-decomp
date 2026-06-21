// addr: 0x014d2280
// name: FUN_014d2280
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014d2280(int *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  int iVar3;
  int *local_4;
  
                    /* Deserializes a boolean-like integer into byte field this+8 after
                       FUN_014d6880, then runs the virtual post hook. No safe class name is
                       available. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar2 = GuildCommand_deserialize(param_1,param_2);
  uVar4 = extraout_var;
  if (bVar2) {
    bVar2 = Deserializer_readInteger(param_2,(int *)&local_4);
    uVar4 = extraout_var_00;
    if (bVar2) {
      pcVar1 = *(code **)(*param_1 + 0x14);
      *(bool *)(param_1 + 2) = local_4 != (int *)0x0;
      iVar3 = (*pcVar1)(param_2);
      return iVar3;
    }
  }
  return (uint)uVar4 << 8;
}

