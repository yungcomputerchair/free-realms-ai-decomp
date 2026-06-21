// addr: 0x0149f8a0
// name: ActionTargetList_applyToHand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToHand(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToHand(void *this,void *trace)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  void *pvVar4;
  void *unaff_EDI;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Handles 'target == Hand' by finding a hand-related child target entry,
                       resolving the current player's hand/pile, applying child actions, and
                       restoring the previous target. Returns true if no matching child entry is
                       present. */
  EvaluationEnvironment_tracef(trace,"target == Hand",unaff_EDI);
  local_4 = *(undefined4 **)((int)this + 8);
  local_c = (undefined4 *)*local_4;
  local_10 = (int)this + 4;
  while( true ) {
    puVar2 = local_c;
    iVar1 = local_10;
    if ((local_10 == 0) || (local_10 != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2 == local_4) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2[3] == 7) {
      EvaluationEnvironment_resolveTarget(trace);
      EvaluationEnvironment_getMember14(trace);
      PlayElement_getGame();
      pvVar4 = (void *)FUN_0139d7c0();
      EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar4,unaff_EDI);
      if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
        FUN_00d83c2d();
        if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
          FUN_00d83c2d();
        }
      }
      pvVar4 = (void *)puVar2[3];
      uVar3 = (**(code **)(*(int *)this + 0x54))(pvVar4,puVar2[4],trace,1);
      EvaluationEnvironment_setCurrentTargetFromElement(trace,local_c,pvVar4);
      return (bool)uVar3;
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2[3] == 8) {
      EvaluationEnvironment_resolveTarget(trace);
      EvaluationEnvironment_getMember14(trace);
      PlayElement_getGame();
      pvVar4 = (void *)FUN_0139d7c0();
      EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar4,unaff_EDI);
      if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
        FUN_00d83c2d();
        if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
          FUN_00d83c2d();
        }
      }
      pvVar4 = (void *)puVar2[3];
      uVar3 = (**(code **)(*(int *)this + 0x54))(pvVar4,puVar2[4],trace,1);
      EvaluationEnvironment_setCurrentTargetFromElement(trace,local_c,pvVar4);
      return (bool)uVar3;
    }
    STLMapIterator_next(&local_10);
  }
  return true;
}

