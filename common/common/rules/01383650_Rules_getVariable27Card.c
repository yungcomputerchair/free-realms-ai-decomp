// addr: 0x01383650
// name: Rules_getVariable27Card
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Rules_getVariable27Card(void * environment) */

void * __fastcall Rules_getVariable27Card(void *environment)

{
  void *pvVar1;
  int elementId_;
  undefined4 uVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  undefined4 uVar5;
  
                    /* If the environment has a non-null field at +4, fetches rules variable 0x27
                       and dynamic-casts it from PlayElement to Card, returning null otherwise. */
  if (*(int *)((int)environment + 4) == 0) {
    return (void *)0x0;
  }
  uVar5 = 0;
  pTVar4 = &Card::RTTI_Type_Descriptor;
  pTVar3 = &PlayElement::RTTI_Type_Descriptor;
  uVar2 = 0;
  FUN_01383460(0x27);
  pvVar1 = find_play_element_in_maps(*(void **)((int)environment + 4),elementId_);
  pvVar1 = (void *)FUN_00d8d382(pvVar1,uVar2,pTVar3,pTVar4,uVar5);
  return pvVar1;
}

