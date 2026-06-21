// addr: 0x01383e30
// name: Rules_getVariable2dCard
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * Rules_getVariable2dCard(void) */

void * Rules_getVariable2dCard(void)

{
  void *pvVar1;
  int in_ECX;
  int elementId_;
  undefined4 uVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  undefined4 uVar5;
  
                    /* Fetches rules variable 0x2d, unwraps it, and dynamic-casts it from
                       PlayElement to Card. */
  uVar5 = 0;
  pTVar4 = &Card::RTTI_Type_Descriptor;
  pTVar3 = &PlayElement::RTTI_Type_Descriptor;
  uVar2 = 0;
  FUN_01383460(0x2d);
  pvVar1 = find_play_element_in_maps(*(void **)(in_ECX + 4),elementId_);
  pvVar1 = (void *)FUN_00d8d382(pvVar1,uVar2,pTVar3,pTVar4,uVar5);
  return pvVar1;
}

