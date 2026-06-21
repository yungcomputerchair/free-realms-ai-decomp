// addr: 0x0149fcc0
// name: ActionTargetList_applyToOpponentDrawDeck
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionTargetList_applyToOpponentDrawDeck(void * this, void * trace) */

bool __thiscall ActionTargetList_applyToOpponentDrawDeck(void *this,void *trace)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  void *commandObject;
  void *pvVar4;
  int extraout_EAX;
  int extraout_EAX_00;
  void *pvVar5;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles 'target == Opp draw deck': may enqueue a shuffle command for
                       draw-deck entries, then resolves the opponent draw deck/hand context and
                       applies child actions. Restores the previous target before returning. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a430b;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(trace,"target == Opp draw deck",commandObject);
  local_10 = *(undefined4 **)((int)this + 8);
  local_18 = (undefined4 *)*local_10;
  local_1c = (int)this + 4;
  while( true ) {
    puVar2 = local_18;
    iVar1 = local_1c;
    if ((local_1c == 0) || (local_1c != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2 == local_10) {
      ExceptionList = local_c;
      return true;
    }
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2[3] == 0x15) {
      pvVar4 = Mem_Alloc(300);
      local_4 = 0;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = CommandObject_Shuffle_ctor(pvVar4,0x23,trace);
      }
      local_4 = 0xffffffff;
      EvaluationEnvironment_addCommandObject(trace,pvVar4,commandObject);
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2[3] == 7) break;
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar2[3] == 8) {
      pvVar4 = EvaluationEnvironment_resolveTarget(trace);
      uVar3 = 0;
      Environment_getObjectForIntegerValueOne();
      if (extraout_EAX_00 != 0) {
        Environment_getObjectForIntegerValueOne();
        PlayElement_getGame();
        pvVar5 = (void *)FUN_0139d7a0();
        EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar5,commandObject);
        if ((puVar2 == *(undefined4 **)(iVar1 + 4)) &&
           (FUN_00d83c2d(), puVar2 == *(undefined4 **)(iVar1 + 4))) {
          FUN_00d83c2d();
        }
        uVar3 = (**(code **)(*(int *)this + 0x54))(puVar2[3],puVar2[4],trace,1);
      }
      EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar4,commandObject);
      ExceptionList = local_c;
      return (bool)uVar3;
    }
    STLMapIterator_next(&local_1c);
  }
  pvVar4 = EvaluationEnvironment_resolveTarget(trace);
  uVar3 = 0;
  Environment_getObjectForIntegerValueOne();
  if (extraout_EAX != 0) {
    Environment_getObjectForIntegerValueOne();
    PlayElement_getGame();
    pvVar5 = (void *)FUN_0139d7a0();
    EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar5,commandObject);
    if ((puVar2 == *(undefined4 **)(iVar1 + 4)) &&
       (FUN_00d83c2d(), puVar2 == *(undefined4 **)(iVar1 + 4))) {
      FUN_00d83c2d();
    }
    uVar3 = (**(code **)(*(int *)this + 0x54))(puVar2[3],puVar2[4],trace,1);
  }
  EvaluationEnvironment_setCurrentTargetFromElement(trace,pvVar4,commandObject);
  ExceptionList = local_c;
  return (bool)uVar3;
}

