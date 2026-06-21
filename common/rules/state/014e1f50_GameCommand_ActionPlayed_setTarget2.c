// addr: 0x014e1f50
// name: GameCommand_ActionPlayed_setTarget2
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall GameCommand_ActionPlayed_setTarget2(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
                    /* Stores target2 element id and, when the target is a Card, stores its
                       action/origin details and owner id in the second target field group. Evidence
                       is paired structure with setTarget1 and ActionPlayed command callers. */
  if (param_2 != 0) {
    uVar1 = PlayElement_getId();
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    piVar2 = (int *)FUN_00d8d382(param_2,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
    if (piVar2 != (int *)0x0) {
      uVar1 = FUN_0138a380();
      *(undefined4 *)(param_1 + 0x44) = uVar1;
      uVar1 = (**(code **)(*piVar2 + 0x28))();
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
    }
  }
  return;
}

