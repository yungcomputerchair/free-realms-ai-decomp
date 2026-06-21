// addr: 0x0149b740
// name: FUN_0149b740
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0149b740(int *param_1,void *param_2)

{
  void *child;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar2;
  int unaff_EDI;
  
                    /* Deserializes a QueryNode child, optionally a ValueData component pointer for
                       newer versions, then an integer field. No safe class name is available. */
  child = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = QueryNode_validateAndApplyChild(param_1,child);
    uVar3 = extraout_var_00;
    if (bVar1) {
      if (1 < (int)param_1) {
        bVar1 = ValueData_deserializeComponentPtr(child,(void **)(param_1 + 4));
        uVar3 = extraout_var_01;
        if (!bVar1) goto LAB_0149b75c;
      }
      bVar1 = Deserializer_readInteger(child,(int *)&stack0xfffffff4);
      uVar3 = extraout_var_02;
      if (bVar1) {
        param_1[5] = unaff_EDI;
        iVar2 = (**(code **)(*param_1 + 0x14))(child);
        return iVar2;
      }
    }
  }
LAB_0149b75c:
  return (uint)uVar3 << 8;
}

