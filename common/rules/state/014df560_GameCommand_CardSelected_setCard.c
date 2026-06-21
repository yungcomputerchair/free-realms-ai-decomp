// addr: 0x014df560
// name: GameCommand_CardSelected_setCard
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall GameCommand_CardSelected_setCard(int param_1,int param_2,undefined4 param_3)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  
                    /* Stores the selected card element id on a GameCommand_CardSelected and, if the
                       element is a Card, also stores its action/origin information and owner id.
                       Evidence is GameCommand_CardSelected constructor caller and Card RTTI check.
                        */
  *(undefined4 *)(param_1 + 0x24) = param_3;
  pvVar1 = find_play_element_in_maps(*(void **)(param_1 + 8),param_2);
  piVar2 = (int *)FUN_00d8d382(pvVar1,0,&PlayElement::RTTI_Type_Descriptor,
                               &Card::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    uVar3 = FUN_0138a380();
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    uVar3 = (**(code **)(*piVar2 + 0x28))();
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  return;
}

