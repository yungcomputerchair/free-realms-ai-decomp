// addr: 0x014958c0
// name: OrNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool OrNode_evaluate(void * this, void * candidateCards, void * log) */

bool __thiscall OrNode_evaluate(void *this,void *candidateCards,void *log)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *env;
  char cVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  void *pvVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  int **item;
  int *piStack_170;
  int *piStack_16c;
  undefined4 uStack_168;
  undefined1 local_164 [4];
  void *pvStack_160;
  undefined1 local_154 [4];
  int *piStack_150;
  undefined1 auStack_14c [8];
  undefined1 auStack_144 [8];
  undefined1 auStack_13c [8];
  undefined1 local_134 [132];
  undefined1 auStack_b0 [16];
  undefined1 local_a0 [132];
  void *pvStack_1c;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates a gvt:or node by evaluating both child expressions into temporary
                       card lists and merging distinct matches back into the candidate list while
                       returning the second child predicate result. Evidence is the "(gvt:or" trace
                       and final " ) => %s" true/false log. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a277c;
  local_c = ExceptionList;
  pvVar6 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffe80);
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(log,"(gvt:or",pvVar6);
  FUN_0135cf00(candidateCards);
  local_4 = 0;
  FUN_0135cf00(candidateCards);
  local_4._0_1_ = 1;
  EvaluationEnvironment_ctor();
  local_4._0_1_ = 2;
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,3);
  EvaluationEnvironment_copyFrom(local_a0,log,pvVar6);
  uVar7 = Rules_getBooleanKey9DefaultFalse();
  EvaluationEnvironment_setBooleanKey9(uVar7);
  uVar7 = FUN_01383b90();
  EvaluationEnvironment_setBooleanKey4(uVar7);
  pvVar8 = EvaluationEnvironment_getTarget2CardList(log);
  PointerVector_assign(local_a0,pvVar8,pvVar6);
  EvaluationEnvironment_copyFrom(local_134,log,pvVar6);
  uVar7 = Rules_getBooleanKey9DefaultFalse();
  EvaluationEnvironment_setBooleanKey9(uVar7);
  uVar7 = FUN_01383b90();
  EvaluationEnvironment_setBooleanKey4(uVar7);
  pvVar8 = EvaluationEnvironment_getTarget2CardList(log);
  PointerVector_assign(local_134,pvVar8,pvVar6);
  (**(code **)(**(int **)((int)this + 0x1c) + 0x3c))(local_154,local_a0);
  item = &piStack_16c;
  cVar5 = (**(code **)(**(int **)((int)this + 0x20) + 0x3c))(item,auStack_13c);
  ValueDataList_assign(candidateCards,local_164);
  piVar11 = piStack_170;
  if (piStack_16c < piStack_170) {
    FUN_00d83c2d();
  }
  do {
    piVar1 = piStack_16c;
    if (piStack_16c < piStack_170) {
      FUN_00d83c2d();
    }
    if (piVar11 == piVar1) {
      pvVar6 = EvaluationEnvironment_getTarget2CardList(auStack_b0);
      pvVar8 = EvaluationEnvironment_getTarget2CardList(auStack_144);
      piVar11 = *(int **)((int)pvVar8 + 4);
      if (*(int **)((int)pvVar8 + 8) < piVar11) {
        FUN_00d83c2d();
      }
      do {
        pvVar9 = EvaluationEnvironment_getTarget2CardList(auStack_144);
        piVar1 = *(int **)((int)pvVar9 + 8);
        if (piVar1 < *(int **)((int)pvVar9 + 4)) {
          FUN_00d83c2d();
        }
        if ((pvVar8 == (void *)0x0) || (pvVar8 != pvVar9)) {
          FUN_00d83c2d();
        }
        env = puStack_8;
        if (piVar11 == piVar1) {
          PointerVector_assign(puStack_8,pvVar6,item);
          pcVar10 = "true";
          if (cVar5 == '\0') {
            pcVar10 = "false";
          }
          EvaluationEnvironment_traceExitf(env,") => %s",pcVar10);
          iStack_14._0_1_ = 2;
          FUN_01385460();
          iStack_14._0_1_ = 1;
          FUN_01385460();
          iStack_14 = (uint)iStack_14._1_3_ << 8;
          if (piStack_170 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(piStack_170);
          }
          piStack_16c = (int *)0x0;
          uStack_168 = 0;
          iStack_14 = 0xffffffff;
          if (pvStack_160 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_160);
          }
          ExceptionList = pvStack_1c;
          return (bool)cVar5;
        }
        if (pvVar8 == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)((int)pvVar8 + 8) <= piVar11) {
          FUN_00d83c2d();
        }
        piVar1 = *(int **)((int)pvVar6 + 8);
        if (piVar1 < *(int **)((int)pvVar6 + 4)) {
          FUN_00d83c2d();
        }
        piVar2 = *(int **)((int)pvVar6 + 4);
        if (*(int **)((int)pvVar6 + 8) < piVar2) {
          FUN_00d83c2d();
        }
        piVar12 = piVar2;
        if (piVar2 != piVar1) {
          do {
            if (*piVar12 == *piVar11) break;
            piVar12 = piVar12 + 1;
          } while (piVar12 != piVar1);
        }
        piVar1 = *(int **)((int)pvVar6 + 8);
        piStack_150 = piVar2;
        if (piVar1 < *(int **)((int)pvVar6 + 4)) {
          FUN_00d83c2d();
        }
        if (pvVar6 == (void *)0x0) {
          FUN_00d83c2d();
        }
        if (piVar12 == piVar1) {
          if (*(int **)((int)pvVar8 + 8) <= piVar11) {
            FUN_00d83c2d();
          }
          uVar3 = *(uint *)((int)pvVar6 + 4);
          if ((uVar3 == 0) ||
             ((uint)((int)(*(int *)((int)pvVar6 + 0xc) - uVar3) >> 2) <=
              (uint)((int)(*(int *)((int)pvVar6 + 8) - uVar3) >> 2))) {
            uVar4 = *(uint *)((int)pvVar6 + 8);
            if (uVar4 < uVar3) {
              FUN_00d83c2d();
            }
            FUN_012619f0(auStack_14c,pvVar6,uVar4,piVar11);
          }
          else {
            piVar1 = *(int **)((int)pvVar6 + 8);
            *piVar1 = *piVar11;
            *(int **)((int)pvVar6 + 8) = piVar1 + 1;
          }
        }
        if (*(int **)((int)pvVar8 + 8) <= piVar11) {
          FUN_00d83c2d();
        }
        piVar11 = piVar11 + 1;
      } while( true );
    }
    if (piStack_16c <= piVar11) {
      FUN_00d83c2d();
    }
    piVar1 = *(int **)((int)candidateCards + 8);
    if (piVar1 < *(int **)((int)candidateCards + 4)) {
      FUN_00d83c2d();
    }
    piVar2 = *(int **)((int)candidateCards + 4);
    if (*(int **)((int)candidateCards + 8) < piVar2) {
      FUN_00d83c2d();
    }
    piVar12 = piVar2;
    if (piVar2 != piVar1) {
      do {
        if (*piVar12 == *piVar11) break;
        piVar12 = piVar12 + 1;
      } while (piVar12 != piVar1);
    }
    piVar1 = *(int **)((int)candidateCards + 8);
    piStack_150 = piVar2;
    if (piVar1 < *(int **)((int)candidateCards + 4)) {
      FUN_00d83c2d();
    }
    if (candidateCards == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar12 == piVar1) {
      if (piStack_16c <= piVar11) {
        FUN_00d83c2d();
      }
      PointerVector_pushBack(candidateCards,piVar11,item);
    }
    if (piStack_16c <= piVar11) {
      FUN_00d83c2d();
    }
    piVar11 = piVar11 + 1;
  } while( true );
}

