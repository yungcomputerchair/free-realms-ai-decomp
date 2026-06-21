// addr: 0x0149f630
// name: ActionTargetList_applyToTargetOwner
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToTargetOwner(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToTargetOwner(void *this,void *trace)

{
  void *this_00;
  byte bVar1;
  void *env;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 uVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  undefined4 uVar9;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Handles 'target == TargetOwner': resolves the current target, verifies it is
                       a Card, obtains the owner card/object, and applies child actions to that
                       owner. Logs distinct failures for null target, non-card target, and missing
                       owner. */
  this_00 = trace;
  EvaluationEnvironment_tracef(trace,"target == TargetOwner",unaff_EDI);
  local_4 = *(undefined4 **)((int)this + 8);
  puVar5 = (undefined4 *)*local_4;
  local_10 = (int)this + 4;
  local_c = puVar5;
  env = EvaluationEnvironment_resolveTarget(trace);
  pvVar2 = EvaluationEnvironment_resolveTarget(trace);
  if (pvVar2 == (void *)0x0) {
    EvaluationEnvironment_tracef(trace,"Target is null!",unaff_EDI);
    return false;
  }
  uVar9 = 0;
  pTVar8 = &Card::RTTI_Type_Descriptor;
  pTVar7 = &PlayElement::RTTI_Type_Descriptor;
  uVar6 = 0;
  pvVar2 = EvaluationEnvironment_resolveTarget(trace);
  piVar3 = (int *)FUN_00d8d382(pvVar2,uVar6,pTVar7,pTVar8,uVar9);
  if (piVar3 == (int *)0x0) {
    EvaluationEnvironment_tracef(trace,"target is not a card",unaff_EDI);
    return false;
  }
  uVar6 = (**(code **)(*piVar3 + 0x30))
                    (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  pvVar2 = (void *)FUN_00d8d382(uVar6);
  if (pvVar2 == (void *)0x0) {
    EvaluationEnvironment_tracef(trace,"trying to check owner of a card with no owner!",unaff_EDI);
    return false;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar2,unaff_EDI);
  trace = (void *)0x0;
  iVar4 = (int)this + 4;
  while( true ) {
    if ((iVar4 == 0) || (iVar4 != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_4) break;
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (puVar5 == *(undefined4 **)(iVar4 + 4)) {
      FUN_00d83c2d();
      if (puVar5 == *(undefined4 **)(iVar4 + 4)) {
        FUN_00d83c2d();
      }
    }
    bVar1 = (**(code **)(*(int *)this + 0x54))(puVar5[3],puVar5[4],this_00,1);
    trace = (void *)(uint)bVar1;
    STLMapIterator_next(&local_10);
    iVar4 = local_10;
    puVar5 = local_c;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(this_00,env,unaff_EDI);
  return (bool)trace._0_1_;
}

