// addr: 0x01500a10
// name: FUN_01500a10
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool FUN_01500a10(void) */

bool FUN_01500a10(void)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  undefined4 uVar7;
  
                    /* Resolves the current PlayElement as a Card and invokes a Card virtual with a
                       stored rule value, returning success unconditionally. Exact command class is
                       not evident. */
  uVar7 = 0;
  pTVar6 = &Card::RTTI_Type_Descriptor;
  pTVar5 = &PlayElement::RTTI_Type_Descriptor;
  uVar4 = 0;
  pvVar1 = EvaluationEnvironment_resolveTarget((void *)(in_ECX + 0x84));
  iVar2 = FUN_00d8d382(pvVar1,uVar4,pTVar5,pTVar6,uVar7);
  if (iVar2 != 0) {
    piVar3 = EvaluationEnvironment_getOriginCard((void *)(in_ECX + 0x84));
    (**(code **)(*piVar3 + 0x1e0))(iVar2);
  }
  return true;
}

