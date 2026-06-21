// addr: 0x0147cd60
// name: FUN_0147cd60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_0147cd60(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
                    /* Deserializer wrapper: begins reading a field/object, deserializes a nested
                       value through FUN_0146c3e0 and a member deserializer at offset 0x5e+0x24,
                       then finalizes the field. Exact class is unresolved. */
  uVar1 = param_2;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_0146c3e0(uVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = (**(code **)(param_1[0x5e] + 0x24))(uVar1);
      if ((char)uVar2 != '\0') {
        uVar2 = (**(code **)(*param_1 + 0x14))(uVar1);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffff00;
}

