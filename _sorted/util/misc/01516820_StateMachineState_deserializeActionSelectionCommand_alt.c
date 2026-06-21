// addr: 0x01516820
// name: StateMachineState_deserializeActionSelectionCommand_alt
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall
StateMachineState_deserializeActionSelectionCommand_alt(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
                    /* Deserializes an alternate StateMachineState action-selection command with
                       pre/post virtual callbacks and
                       StateMachineState_deserializeActionSelection_alt. */
  uVar1 = param_2;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = StateMachineState_deserializeActionSelection_alt(uVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x14))(uVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

