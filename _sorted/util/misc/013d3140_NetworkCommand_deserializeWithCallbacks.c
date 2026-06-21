// addr: 0x013d3140
// name: NetworkCommand_deserializeWithCallbacks
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall NetworkCommand_deserializeWithCallbacks(int *param_1,void *param_2)

{
  void *reader;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  int iVar2;
  
                    /* Deserializes a network command with pre-read, nested-command deserialize, and
                       post-read virtual callbacks; returns false on failure. */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = NetworkCommand_deserializeWithNestedCommand(param_1,reader);
    uVar3 = extraout_var_00;
    if (bVar1) {
      iVar2 = (**(code **)(*param_1 + 0x14))(reader);
      return iVar2;
    }
  }
  return (uint)uVar3 << 8;
}

