// addr: 0x01418450
// name: EvaluationEnvironment_getSourceCWCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall EvaluationEnvironment_getSourceCWCard(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  undefined4 uVar5;
  
                    /* Resolves/casts the object at environment offset +0x60 to CWCard via
                       PlayElement RTTI. */
  uVar5 = 0;
  pTVar4 = &CWCard::RTTI_Type_Descriptor;
  pTVar3 = &PlayElement::RTTI_Type_Descriptor;
  uVar2 = 0;
  pvVar1 = find_play_element_in_maps(*(void **)(param_1 + 8),param_2);
  FUN_00d8d382(pvVar1,uVar2,pTVar3,pTVar4,uVar5);
  return;
}

