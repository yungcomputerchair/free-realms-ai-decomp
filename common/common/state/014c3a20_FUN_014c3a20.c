// addr: 0x014c3a20
// name: FUN_014c3a20
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_014c3a20(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
                    /* Deserializer wrapper: begins a field, calls FUN_013d9bd0 to deserialize a
                       nested value, then finalizes the field. The owning command/class is not
                       identifiable here. */
  uVar1 = param_2;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_013d9bd0(uVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x14))(uVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

