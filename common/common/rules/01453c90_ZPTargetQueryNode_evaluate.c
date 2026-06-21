// addr: 0x01453c90
// name: ZPTargetQueryNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ZPTargetQueryNode_evaluate(void * this, void * candidateCards, void *
   log) */

bool __thiscall ZPTargetQueryNode_evaluate(void *this,void *candidateCards,void *log)

{
  char cVar1;
  void *env;
  undefined1 uVar2;
  bool bVar3;
  int *key;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  void *pvVar11;
  int local_54;
  int local_50;
  int local_48;
  undefined1 auStack_38 [12];
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  env = log;
                    /* Evaluates a ZPTarget Query Node against owner/active-player/supplied targets,
                       runs child property queries, applies the node's NOT flag, and writes either a
                       count or boolean result. Evidence is the "(ZPTarget Query Node" trace plus
                       logs "mNot", "pile: owner", "pile: activePlayer", and "Target Not Matched.".
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bbbb;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffff9c);
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(log,"(ZPTarget Query Node",key);
  FUN_012fa910();
  local_4 = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    log = Mem_Alloc(0xc);
    local_4._0_1_ = 1;
    if (log == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_012fa910();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    log = (void *)0x0;
    puVar5 = IntPointerMap_getOrCreateValue((void *)((int)this + 0x10),&log,key);
    *puVar5 = uVar4;
  }
  local_50 = **(int **)((int)this + 0x14);
  local_48 = *(int *)((int)this + 0x14);
  iVar9 = (int)this + 0x10;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4._0_1_ = 2;
  local_54 = iVar9;
  EvaluationEnvironment_tracef(env,"mNot: %d",(uint)*(byte *)((int)this + 0x2c));
  iVar7 = *(int *)((int)this + 0x1c);
  if ((iVar7 == 0x19) || (iVar7 == 0x2f)) {
    EvaluationEnvironment_tracef(env,"pile: owner",key);
    pvVar6 = EvaluationEnvironment_getOriginCard(env);
    if ((pvVar6 != (void *)0x0) &&
       (iVar7 = FUN_00d8d382(pvVar6,0,&Card::RTTI_Type_Descriptor,&CWCard::RTTI_Type_Descriptor,0),
       iVar7 != 0)) {
      (**(code **)(*(int *)this + 0x5c))(iVar7,local_2c,env);
      goto LAB_01453e8c;
    }
    EvaluationEnvironment_traceExitf(env,") => false",key);
  }
  else {
    if (iVar7 != 0x426) {
      bVar3 = TargetQueryNode_evaluate(this,candidateCards,env);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_28 == (void *)0x0) {
        local_28 = (void *)0x0;
        local_24 = 0;
        local_20 = 0;
        local_4 = 0xffffffff;
        FUN_01300cd0();
        ExceptionList = local_c;
        return bVar3;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    EvaluationEnvironment_tracef(env,"pile: activePlayer",key);
    pvVar6 = EvaluationEnvironment_getGame(env);
    pvVar6 = Game_getCurrentTurn(pvVar6);
    pvVar6 = CWPlayer_dynamicCastFromGamePlayer(pvVar6);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = env;
      EvaluationEnvironment_tracef(env,"Couldn\'t get activePlayer card",key);
      EvaluationEnvironment_traceExitf(env,") => false",pvVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      STLVector_int_clear(local_2c);
      goto LAB_014540aa;
    }
    iVar9 = *(int *)this;
    puVar10 = local_2c;
    pvVar11 = env;
    iVar7 = unknown_getField30(pvVar6);
    (**(code **)(iVar9 + 0x5c))(iVar7,puVar10,pvVar11);
    iVar9 = local_54;
LAB_01453e8c:
    if (*(int *)((int)this + 0x30) != 0) goto LAB_01453ea0;
    while( true ) {
      RBTreeIterator_increment(&local_54);
      iVar9 = local_54;
LAB_01453ea0:
      if ((iVar9 == 0) || (iVar9 != (int)this + 0x10)) {
        FUN_00d83c2d();
      }
      if (local_50 == local_48) break;
      pvStack_18 = (void *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      local_4._0_1_ = 3;
      FUN_012fa910();
      local_4 = CONCAT31(local_4._1_3_,4);
      if (iVar9 == 0) {
        FUN_00d83c2d();
      }
      if (local_50 == *(int *)(iVar9 + 4)) {
        FUN_00d83c2d();
      }
      FUN_013010e0(*(undefined4 *)(local_50 + 0x10));
      FUN_01301590(env);
      piVar8 = EvaluationEnvironment_getGame(env);
      if (local_50 == *(int *)(local_54 + 4)) {
        FUN_00d83c2d();
      }
      (**(code **)(*piVar8 + 0x188))
                (local_2c,*(undefined4 *)(local_50 + 0xc),auStack_38,auStack_1c,env);
      ValueDataList_assign(local_2c,auStack_1c);
      local_4._0_1_ = 3;
      FUN_01300cd0();
      local_4._0_1_ = 2;
      uVar2 = (undefined1)local_4;
      local_4._0_1_ = 2;
      if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
      pvStack_18 = (void *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      local_4._0_1_ = uVar2;
    }
    cVar1 = *(char *)((int)this + 0x2c);
    if ((((cVar1 == '\0') && (local_28 != (void *)0x0)) && (local_24 - (int)local_28 >> 2 != 0)) ||
       ((cVar1 == '\x01' && ((local_28 == (void *)0x0 || (local_24 - (int)local_28 >> 2 == 0)))))) {
      if (cVar1 == '\0') {
        if (local_28 == (void *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = local_24 - (int)local_28 >> 2;
        }
        FUN_01300680(2);
        *(int *)((int)candidateCards + 8) = iVar9;
      }
      else {
        EvaluationEnvironment_tracef(env,"Target is NOT equal to the query.",key);
        FUN_01300680(1);
        *(undefined1 *)((int)candidateCards + 8) = 1;
      }
      EvaluationEnvironment_logCardList(env,"Cards Matched: ",local_2c);
      EvaluationEnvironment_traceExitf(env,") => true",key);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_28 == (void *)0x0) {
        local_28 = (void *)0x0;
        local_24 = 0;
        local_20 = 0;
        local_4 = 0xffffffff;
        FUN_01300cd0();
        ExceptionList = local_c;
        return true;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    FUN_01300680(1);
    *(undefined1 *)((int)candidateCards + 8) = 0;
    pvVar6 = env;
    EvaluationEnvironment_tracef(env,"Target Not Matched.",key);
    EvaluationEnvironment_traceExitf(env,") => false",pvVar6);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = (void *)0x0;
LAB_014540aa:
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return false;
}

