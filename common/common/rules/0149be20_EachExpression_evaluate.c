// addr: 0x0149be20
// name: EachExpression_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EachExpression_evaluate(void * this, void * result, void * log) */

bool __thiscall EachExpression_evaluate(void *this,void *result,void *log)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 *puVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_EBX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 **element;
  void *pvStack_5c;
  void *local_58;
  undefined1 *puStack_54;
  int iStack_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [4];
  undefined4 *puStack_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  uint uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates an Each expression by obtaining an initial card list, binding each
                       card as target1/query context, optionally setting selectedPlayer for player
                       cards, and evaluating the child expression for every card. Evidence is the
                       "(Each" trace plus "initialcards:" and "Evaluating Expression tree for card
                       %d" logs. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3b10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_58 = this;
  EvaluationEnvironment_traceEnterf(log,"(Each",DAT_01b839d8 ^ (uint)&stack0xffffff94);
  local_34 = 0;
  local_30 = 0;
  local_2c = (void *)0x0;
  local_4 = 0;
  element = &local_38;
  (**(code **)(*(int *)this + 0x50))(element,log);
  EvaluationEnvironment_logCardList(log,"initialcards: ",auStack_40);
  local_58 = (void *)**(int **)((int)this + 0x14);
  pvStack_5c = (void *)((int)this + 0x10);
  while( true ) {
    pvVar2 = local_58;
    pvVar1 = pvStack_5c;
    iStack_50 = *(int *)((int)this + 0x14);
    if ((pvStack_5c == (void *)0x0) || (pvStack_5c != (void *)((int)this + 0x10))) {
      FUN_00d83c2d();
    }
    if (pvVar2 == (void *)iStack_50) break;
    local_2c = (void *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    local_c._0_1_ = 1;
    FUN_012fa910();
    local_c = (void *)CONCAT31(local_c._1_3_,2);
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == (void *)*(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_013010e0(*(undefined4 *)((int)pvVar2 + 0x10));
    FUN_01301590(log);
    piVar5 = EvaluationEnvironment_getGame(log);
    if (pvVar2 == (void *)*(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    (**(code **)(*piVar5 + 0x188))
              (auStack_40,*(undefined4 *)((int)pvVar2 + 0xc),auStack_4c,&local_30,log);
    ValueDataList_assign(auStack_40,&local_30);
    local_c._0_1_ = 1;
    FUN_01300cd0();
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = (void *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    RBTreeIterator_increment(&pvStack_5c);
  }
  pvStack_5c = EvaluationEnvironment_resolveTarget(log);
  uVar6 = FUN_01383880();
  puVar8 = puStack_3c;
  if (local_38 < puStack_3c) {
    FUN_00d83c2d();
  }
  puStack_54 = auStack_40;
  while( true ) {
    puVar9 = local_38;
    puVar3 = puStack_54;
    if (local_38 < puStack_3c) {
      FUN_00d83c2d();
    }
    if ((puVar3 == (undefined1 *)0x0) || (puVar3 != auStack_40)) {
      FUN_00d83c2d();
    }
    if (puVar8 == puVar9) {
      EvaluationEnvironment_setCurrentTargetFromElement(log,pvStack_5c,element);
      EvaluationEnvironment_traceExitf(log,") => true",element);
      local_c = (void *)0xffffffff;
      if (puStack_3c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_3c);
      }
      ExceptionList = pvStack_14;
      return true;
    }
    if (puVar3 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(puVar3 + 8) <= puVar8) {
      FUN_00d83c2d();
    }
    piVar5 = (int *)*puVar8;
    uVar7 = PlayElement_getId();
    EvaluationEnvironment_tracef(log,"Evaluating Expression tree for card %d",uVar7);
    EvaluationEnvironment_setCurrentTargetFromElement(log,piVar5,element);
    uStack_18 = 0xf;
    uStack_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
               "target1",7);
    local_c._0_1_ = 3;
    uVar7 = PlayElement_getId();
    puVar9 = &local_30;
    EvaluationEnvironment_getGame(log);
    FUN_01367200(puVar9,uVar7);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (0xf < uStack_18) break;
    uStack_18 = 0xf;
    uStack_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    cVar4 = (**(code **)(*piVar5 + 0x1e8))();
    if (cVar4 != '\0') {
      EvaluationEnvironment_tracef(log,"Card is player card, setting as selectedPlayer.",element);
      uVar7 = (**(code **)(*piVar5 + 0x28))();
      EvaluationEnvironment_setIntegerKey1(uVar7);
    }
    (**(code **)(**(int **)(unaff_EBX + 0x1c) + 0x38))(local_4,log);
    EvaluationEnvironment_setIntegerKey1(uVar6);
    if (*(undefined4 **)(puStack_54 + 8) <= puVar8) {
      FUN_00d83c2d();
    }
    puVar8 = puVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}

