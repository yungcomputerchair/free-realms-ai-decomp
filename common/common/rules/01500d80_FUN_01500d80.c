// addr: 0x01500d80
// name: FUN_01500d80
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool FUN_01500d80(void) */

bool FUN_01500d80(void)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  undefined4 uVar7;
  
                    /* Resolves the current PlayElement as a Card and invokes a Card virtual with an
                       environment-derived argument; returns false if no Card is available. */
  uVar7 = 0;
  pTVar6 = &Card::RTTI_Type_Descriptor;
  pTVar5 = &PlayElement::RTTI_Type_Descriptor;
  uVar4 = 0;
  pvVar2 = EvaluationEnvironment_resolveTarget((void *)(in_ECX + 0x84));
  piVar3 = (int *)FUN_00d8d382(pvVar2,uVar4,pTVar5,pTVar6,uVar7);
  if (piVar3 == (int *)0x0) {
    return false;
  }
  iVar1 = *piVar3;
  pvVar2 = EvaluationEnvironment_getOriginCard((void *)(in_ECX + 0x84));
  (**(code **)(iVar1 + 0x1dc))(pvVar2);
  return true;
}

