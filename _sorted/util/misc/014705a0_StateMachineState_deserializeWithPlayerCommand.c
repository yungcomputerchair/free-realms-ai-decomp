// addr: 0x014705a0
// name: StateMachineState_deserializeWithPlayerCommand
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall StateMachineState_deserializeWithPlayerCommand(int *param_1,void *param_2)

{
  void *reader;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  int iVar2;
  
                    /* Deserializes a StateMachineState-with-player command with pre/post virtual
                       callbacks and StateMachineState_deserializeWithPlayer. */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StateMachineState_deserializeWithPlayer(param_1,reader);
    uVar3 = extraout_var_00;
    if (bVar1) {
      iVar2 = (**(code **)(*param_1 + 0x14))(reader);
      return iVar2;
    }
  }
  return (uint)uVar3 << 8;
}

