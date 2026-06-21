// addr: 0x014947b0
// name: PileQueryNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PileQueryNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall PileQueryNode_evaluate(void *this,void *result,void *trace)

{
  void *last;
  void *first;
  void *pvVar1;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int unaff_EBP;
  int *piVar4;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  undefined1 auStack_4c [4];
  int *local_48;
  undefined1 local_44 [16];
  undefined1 auStack_34 [4];
  void *pvStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates a gvt:PileQueryNode by seeding an initial card list, iterating
                       property/query clauses, filtering cards via the environment query routine,
                       and logging the matched result set. Always returns true after filling the
                       result list. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a25e0;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff94);
  ExceptionList = &local_c;
  local_5c = this;
  EvaluationEnvironment_traceEnterf(trace,"(gvt:PileQueryNode",pvVar1);
  FUN_012fa910();
  local_4 = 0;
  local_48 = *(int **)((int)this + 0x14);
  piVar4 = (int *)*local_48;
  piVar3 = (int *)((int)this + 0x10);
  local_58 = piVar3;
  local_54 = piVar3;
  local_50 = piVar4;
  if (piVar4 == local_48) {
    FUN_00d83c2d();
  }
  FUN_013010e0(piVar4[4]);
  FUN_01301590(trace);
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  ValueDataList_assign(&local_1c,result);
  last = *(void **)((int)result + 8);
  if (last < *(void **)((int)result + 4)) {
    FUN_00d83c2d();
  }
  first = *(void **)((int)result + 4);
  if (*(void **)((int)result + 8) < first) {
    FUN_00d83c2d();
  }
  PointerVector_eraseRangeAssignIterator(result,local_44,result,first,result,last,pvVar1);
  pvVar1 = result;
  (**(code **)(*local_5c + 0x50))(result,trace);
  EvaluationEnvironment_tracef
            (trace,"Going to examine %d properties, starting with %d cards.",
             *(int *)(unaff_EBP + 0x18) + -1);
  while( true ) {
    if ((local_5c == (int *)0x0) || (local_5c != piVar3)) {
      FUN_00d83c2d();
    }
    if (piVar4 == local_50) break;
    pvStack_30 = (void *)0x0;
    uStack_2c = 0;
    uStack_28 = 0;
    local_c._0_1_ = 2;
    iVar2 = unknown_intVector_size(result);
    EvaluationEnvironment_tracef(trace,"Examining %d cards.",iVar2);
    FUN_012fa910();
    piVar3 = local_5c;
    local_c = (void *)CONCAT31(local_c._1_3_,3);
    if (local_5c == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar4 == (int *)piVar3[1]) {
      FUN_00d83c2d();
    }
    FUN_013010e0(piVar4[4]);
    FUN_01301590(trace);
    piVar3 = EvaluationEnvironment_getGame(trace);
    if (piVar4 == (int *)local_5c[1]) {
      FUN_00d83c2d();
    }
    (**(code **)(*piVar3 + 0x188))(result,piVar4[3],auStack_4c,auStack_34,trace);
    ValueDataList_assign(result,auStack_34);
    local_c._0_1_ = 2;
    FUN_01300cd0();
    local_c = (void *)CONCAT31(local_c._1_3_,1);
    if (pvStack_30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    pvStack_30 = (void *)0x0;
    uStack_2c = 0;
    uStack_28 = 0;
    RBTreeIterator_increment(&local_5c);
    piVar3 = unaff_EBX;
    piVar4 = local_58;
  }
  EvaluationEnvironment_logCardList(trace,"Matched: ",result);
  EvaluationEnvironment_traceExitf(trace,") => true",pvVar1);
  local_c = (void *)((uint)local_c & 0xffffff00);
  if (pvStack_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_20);
  }
  pvStack_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_14;
  return true;
}

