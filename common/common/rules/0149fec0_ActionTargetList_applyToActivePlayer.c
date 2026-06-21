// addr: 0x0149fec0
// name: ActionTargetList_applyToActivePlayer
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToActivePlayer(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToActivePlayer(void *this,void *trace)

{
  void *pvVar1;
  undefined1 uVar2;
  void *pvVar3;
  int *piVar4;
  void *pvVar5;
  int unaff_EBX;
  int iVar6;
  void *unaff_EBP;
  undefined4 unaff_EDI;
  void *element;
  
                    /* Handles 'target == activePlayer' by resolving target code 0x3e, temporarily
                       setting it as current target, applying child actions, and restoring the prior
                       target. Uses the same child-list traversal as other target helpers. */
  EvaluationEnvironment_tracef(trace,"target == activePlayer",unaff_EDI);
  pvVar1 = (void *)**(int **)((int)this + 8);
  pvVar3 = EvaluationEnvironment_resolveTarget(trace);
  piVar4 = EvaluationEnvironment_getGame(trace);
  element = (void *)0x3e;
  pvVar5 = (void *)(**(code **)(*piVar4 + 0x200))(0x3e,trace);
  EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar5,element);
  uVar2 = 0;
  iVar6 = (int)this + 4;
  pvVar5 = pvVar1;
  while( true ) {
    if ((iVar6 == 0) || (iVar6 != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (pvVar5 == pvVar1) break;
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    if (pvVar5 == *(void **)(iVar6 + 4)) {
      FUN_00d83c2d();
      if (pvVar5 == *(void **)(iVar6 + 4)) {
        FUN_00d83c2d();
      }
    }
    uVar2 = (**(code **)(*(int *)this + 0x54))
                      (*(undefined4 *)((int)pvVar5 + 0xc),*(undefined4 *)((int)pvVar5 + 0x10),trace,
                       1);
    STLMapIterator_next(&stack0xffffffe8);
    iVar6 = unaff_EBX;
    pvVar5 = pvVar3;
  }
  EvaluationEnvironment_setCurrentTargetFromElement(trace,unaff_EBP,element);
  return (bool)uVar2;
}

