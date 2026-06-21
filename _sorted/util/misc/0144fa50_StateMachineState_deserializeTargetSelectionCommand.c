// addr: 0x0144fa50
// name: StateMachineState_deserializeTargetSelectionCommand
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall StateMachineState_deserializeTargetSelectionCommand(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  
                    /* Deserializes a StateMachineState target-selection command with pre/post
                       virtual callbacks and StateMachineState_deserializeTargetSelection. */
  uVar1 = param_2;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if (cVar2 == '\0') {
    return;
  }
  StateMachineState_deserializeTargetSelection(uVar1);
  (**(code **)(*param_1 + 0x14))(uVar1);
  return;
}

