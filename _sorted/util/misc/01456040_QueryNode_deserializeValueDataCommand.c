// addr: 0x01456040
// name: QueryNode_deserializeValueDataCommand
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall QueryNode_deserializeValueDataCommand(int *param_1,void *param_2)

{
  void *stream;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  int iVar2;
  
                    /* Deserializes a query-node value-data command with pre/post virtual callbacks
                       and QueryNode_deserializeValueData. */
  stream = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = QueryNode_deserializeValueData(param_1,stream);
    uVar3 = extraout_var_00;
    if (bVar1) {
      iVar2 = (**(code **)(*param_1 + 0x14))(stream);
      return iVar2;
    }
  }
  return (uint)uVar3 << 8;
}

