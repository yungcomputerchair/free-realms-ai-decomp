// addr: 0x014b8970
// name: FUN_014b8970
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_014b8970(int *param_1,int *param_2)

{
  uint uVar1;
  int unaff_EDI;
  int *local_4;
  
                    /* Deserializes a nested/compound field via FUN_01445070 after FUN_01441e20, and
                       conditionally reads a string at this+0x10 for newer versions. Class identity
                       is not visible. */
  local_4 = param_1;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_01441e20(param_2);
    if ((char)uVar1 != '\0') {
      local_4 = param_2;
      uVar1 = FUN_01445070(param_1 + 1);
      if ((char)uVar1 != '\0') {
        if (1 < unaff_EDI) {
          Deserializer_readString(param_2,param_1 + 4);
        }
        uVar1 = (**(code **)(*param_1 + 0x14))(param_2);
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffff00;
}

