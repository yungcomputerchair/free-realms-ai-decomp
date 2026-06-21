// addr: 0x014e72b0
// name: Deserializer_readIntegerField
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall Deserializer_readIntegerField(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  int iVar2;
  
                    /* Deserializer wrapper that begins a field, reads an integer into the object
                       via Deserializer_readInteger, and finalizes the field on success. */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(this,param_1 + 1);
    uVar3 = extraout_var_00;
    if (bVar1) {
      iVar2 = (**(code **)(*param_1 + 0x14))(this);
      return iVar2;
    }
  }
  return (uint)uVar3 << 8;
}

