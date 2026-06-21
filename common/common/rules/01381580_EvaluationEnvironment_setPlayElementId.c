// addr: 0x01381580
// name: EvaluationEnvironment_setPlayElementId
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall EvaluationEnvironment_setPlayElementId(int param_1,int param_2)

{
  undefined4 uVar1;
  
                    /* Stores the id of a PlayElement into the evaluation environment, or clears the
                       stored id when passed null. */
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  uVar1 = PlayElement_getId();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}

