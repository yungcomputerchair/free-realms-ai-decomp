// addr: 0x014d2630
// name: FUN_014d2630
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014d2630(int *param_1,void *param_2)

{
  void *deserializer;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  int unaff_ESI;
  
                    /* Deserializes conditionally versioned integer field at this+8 after
                       FUN_014d6880; older versions skip the read. Class identity is unknown. */
  deserializer = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = GuildCommand_deserialize(param_1,deserializer);
    uVar3 = extraout_var_00;
    if (bVar1) {
      if (1 < unaff_ESI) {
        bVar1 = Deserializer_readInteger(deserializer,param_1 + 2);
        uVar3 = extraout_var_01;
        if (!bVar1) goto LAB_014d264b;
      }
      iVar2 = (**(code **)(*param_1 + 0x14))(deserializer);
      return iVar2;
    }
  }
LAB_014d264b:
  return (uint)uVar3 << 8;
}

