// addr: 0x0148e090
// name: SumPropertyNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: bool SumPropertyNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall SumPropertyNode_evaluate(void *this,void *result,void *trace)

{
  undefined4 *puVar1;
  int *piVar2;
  void *env;
  int iVar3;
  void *pvVar4;
  void *unaff_EBP;
  undefined4 *puVar5;
  int iVar6;
  undefined4 **element;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [4];
  undefined4 *puStack_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds/filters an initial card list, iterates matched cards, reads the
                       configured numeric property from each Card, sums the values, and stores the
                       integer total. Logs 'initialcards:', 'summing %d for card %d', and 'got
                       value: %d'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(trace,"(Sum",DAT_01b839d8 ^ (uint)&stack0xffffffa4);
  local_28 = 0;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_4 = 0;
  element = &local_2c;
  (**(code **)(*(int *)this + 0x50))(element,trace);
  EvaluationEnvironment_logCardList(trace,"initialcards: ",auStack_34);
  iVar6 = **(int **)((int)this + 0x14);
  pvVar4 = this;
  while( true ) {
    iVar3 = *(int *)((int)pvVar4 + 0x14);
    if ((this == (void *)0xfffffff0) || ((int)this + 0x10 != (int)pvVar4 + 0x10)) {
      FUN_00d83c2d();
    }
    if (iVar6 == iVar3) break;
    local_20 = (void *)0x0;
    uStack_1c = 0;
    uStack_18 = 0;
    local_c._0_1_ = 1;
    FUN_012fa910();
    local_c = (void *)CONCAT31(local_c._1_3_,2);
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (iVar6 == *(int *)((int)this + 0x14)) {
      FUN_00d83c2d();
    }
    FUN_013010e0(*(undefined4 *)(iVar6 + 0x10));
    FUN_01301590(trace);
    piVar2 = EvaluationEnvironment_getGame(trace);
    if (iVar6 == *(int *)((int)this + 0x14)) {
      FUN_00d83c2d();
    }
    (**(code **)(*piVar2 + 0x188))
              (auStack_34,*(undefined4 *)(iVar6 + 0xc),auStack_40,&local_24,trace);
    ValueDataList_assign(auStack_34,&local_24);
    local_c._0_1_ = 1;
    FUN_01300cd0();
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    local_20 = (void *)0x0;
    uStack_1c = 0;
    uStack_18 = 0;
    RBTreeIterator_increment(&stack0xffffffb0);
    pvVar4 = unaff_EBP;
  }
  env = EvaluationEnvironment_resolveTarget(trace);
  puVar5 = puStack_30;
  iVar6 = 0;
  if (local_2c < puStack_30) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = local_2c;
    if (local_2c < puStack_30) {
      FUN_00d83c2d();
    }
    if (&stack0x00000000 == (undefined1 *)0x34) {
      FUN_00d83c2d();
    }
    iVar3 = local_4;
    if (puVar5 == puVar1) break;
    if (&stack0x00000000 == (undefined1 *)0x34) {
      FUN_00d83c2d();
    }
    if (local_2c <= puVar5) {
      FUN_00d83c2d();
    }
    piVar2 = (int *)*puVar5;
    PlayElement_getId();
    EvaluationEnvironment_tracef(trace,"summing %d for card %d",*(undefined4 *)((int)pvVar4 + 0x28))
    ;
    EvaluationEnvironment_setCurrentTargetFromElement(trace,piVar2,element);
    iVar3 = (**(code **)(*piVar2 + 0x15c))(*(undefined4 *)((int)pvVar4 + 0x28),trace);
    EvaluationEnvironment_tracef(trace,"got value: %d",iVar3);
    iVar6 = iVar6 + iVar3;
    if (local_2c <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  FUN_01300680(2);
  *(int *)(iVar3 + 8) = iVar6;
  EvaluationEnvironment_setCurrentTargetFromElement(trace,env,element);
  EvaluationEnvironment_traceExitf(trace,") => true",element);
  local_c = (void *)0xffffffff;
  if (puStack_30 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_30);
  }
  ExceptionList = pvStack_14;
  return true;
}

