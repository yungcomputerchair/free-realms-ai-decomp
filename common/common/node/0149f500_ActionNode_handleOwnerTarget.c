// addr: 0x0149f500
// name: ActionNode_handleOwnerTarget
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleOwnerTarget(void * this, void * environment) */

bool __thiscall ActionNode_handleOwnerTarget(void *this,void *environment)

{
  void *pvVar1;
  undefined1 uVar2;
  void *pvVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  int unaff_EBX;
  int iVar7;
  void *unaff_EBP;
  undefined4 unaff_EDI;
  TypeDescriptor *element;
  
                    /* Resolves the owner of the current/origin card, temporarily sets it as current
                       target, and evaluates child target entries against that owner. */
  EvaluationEnvironment_tracef(environment,"target == Owner",unaff_EDI);
  pvVar1 = (void *)**(int **)((int)this + 8);
  pvVar3 = EvaluationEnvironment_resolveTarget(environment);
  pvVar4 = EvaluationEnvironment_getOriginCard(environment);
  if (pvVar4 == (void *)0x0) {
    FUN_012f5a60("environment->getOriginCard()","..\\common\\common\\node\\ActionNode.cpp",0x2f5);
  }
  piVar5 = EvaluationEnvironment_getGame(environment);
  element = &Card::RTTI_Type_Descriptor;
  uVar6 = (**(code **)(*piVar5 + 0x200))
                    (5,environment,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,
                     0);
  pvVar4 = (void *)FUN_00d8d382(uVar6);
  if (pvVar4 == (void *)0x0) {
    EvaluationEnvironment_tracef
              (environment,"trying to check owner of a card with no owner!",element);
    return false;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(environment,pvVar4,element);
  uVar2 = 0;
  iVar7 = (int)this + 4;
  pvVar4 = pvVar1;
  while( true ) {
    if ((iVar7 == 0) || (iVar7 != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (pvVar4 == pvVar1) break;
    if (iVar7 == 0) {
      FUN_00d83c2d();
    }
    if (pvVar4 == *(void **)(iVar7 + 4)) {
      FUN_00d83c2d();
      if (pvVar4 == *(void **)(iVar7 + 4)) {
        FUN_00d83c2d();
      }
    }
    uVar2 = (**(code **)(*(int *)this + 0x54))
                      (*(undefined4 *)((int)pvVar4 + 0xc),*(undefined4 *)((int)pvVar4 + 0x10),
                       environment,1);
    STLMapIterator_next(&stack0xffffffe8);
    iVar7 = unaff_EBX;
    pvVar4 = pvVar3;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(environment,unaff_EBP,element);
  return (bool)uVar2;
}

