// addr: 0x013eecd0
// name: NetworkCommand_deserializeTemplateWithString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall NetworkCommand_deserializeTemplateWithString(int *param_1,void *param_2)

{
  void *reader;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  
                    /* Begins deserialization, calls NetworkCommand_deserializeTemplate, reads a
                       string/complex field via FUN_013c28d0, and finalizes. Class is not
                       identified. */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    NetworkCommand_deserializeTemplate(param_1,reader);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readString(reader,param_1 + 1);
      uVar3 = extraout_var_01;
      if (bVar1) {
        iVar2 = (**(code **)(*param_1 + 0x14))(reader);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

