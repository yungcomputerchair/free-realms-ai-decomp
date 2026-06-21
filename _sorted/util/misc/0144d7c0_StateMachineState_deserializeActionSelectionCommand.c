// addr: 0x0144d7c0
// name: StateMachineState_deserializeActionSelectionCommand
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall StateMachineState_deserializeActionSelectionCommand(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
                    /* Deserializes a StateMachineState action-selection command with pre/post
                       virtual callbacks and StateMachineState_deserializeActionSelection. */
  uVar1 = param_2;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = StateMachineState_deserializeActionSelection(uVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x14))(uVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

