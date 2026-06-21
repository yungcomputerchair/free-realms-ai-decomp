// addr: 0x0148ed30
// name: FUN_0148ed30
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0148ed30(int *param_1,void *param_2)

{
  void *child;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_4;
  
                    /* Deserializes a QueryNode child, an integer, a string, and versioned optional
                       integer/boolean fields. No class-specific name is visible. */
  child = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = QueryNode_validateAndApplyChild(param_1,child);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(child,(int *)&stack0xfffffff0);
      uVar3 = extraout_var_01;
      if (bVar1) {
        param_1[4] = unaff_EDI;
        bVar1 = Deserializer_readString(child,param_1 + 5);
        uVar3 = extraout_var_02;
        if (bVar1) {
          if (1 < iStack_4) {
            bVar1 = Deserializer_readInteger(child,param_1 + 0xc);
            uVar3 = extraout_var_03;
            if (!bVar1) goto LAB_0148ed4e;
          }
          if (2 < iStack_4) {
            bVar1 = Deserializer_readInteger(child,(int *)&stack0xfffffff4);
            uVar3 = extraout_var_04;
            if (!bVar1) goto LAB_0148ed4e;
            *(bool *)(param_1 + 0xd) = unaff_ESI != 0;
          }
          iVar2 = (**(code **)(*param_1 + 0x14))(child);
          return iVar2;
        }
      }
    }
  }
LAB_0148ed4e:
  return (uint)uVar3 << 8;
}

