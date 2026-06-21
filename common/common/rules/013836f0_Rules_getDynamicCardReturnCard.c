// addr: 0x013836f0
// name: Rules_getDynamicCardReturnCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Rules_getDynamicCardReturnCard(int param_1)

{
  void *pvVar1;
  int elementId_;
  undefined4 uVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  undefined4 uVar5;
  
                    /* Reads integer key 0x21, resolves it to a PlayElement, and RTTI-casts it to
                       Card. */
  uVar5 = 0;
  pTVar4 = &Card::RTTI_Type_Descriptor;
  pTVar3 = &PlayElement::RTTI_Type_Descriptor;
  uVar2 = 0;
  FUN_01383460(0x21);
  pvVar1 = find_play_element_in_maps(*(void **)(param_1 + 4),elementId_);
  FUN_00d8d382(pvVar1,uVar2,pTVar3,pTVar4,uVar5);
  return;
}

