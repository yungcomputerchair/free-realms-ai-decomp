// addr: 0x0149c7a0
// name: DivideRoundNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DivideRoundNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall DivideRoundNode_evaluate(void *this,void *result,void *trace)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBX;
  void *pvVar6;
  undefined1 *puVar7;
  int iStack_1c;
  undefined1 local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates a DivideRound expression: evaluates two numeric child expressions,
                       prevents divide-by-zero, performs rounded or normal division depending on a
                       flag, and stores an integer result. Logs '(DivideRound' and the round-up
                       calculation. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3bd0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_traceEnterf(trace,"(DivideRound",uVar2);
  puVar7 = local_18;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(puVar7,trace);
  if ((((cVar1 != '\0') &&
       (cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(&stack0xffffffd4), cVar1 != '\0')
       ) && (iStack_1c == 2)) && (unaff_EBX == 2)) {
    iVar3 = FUN_0123c340();
    if (iVar3 == 0) {
      EvaluationEnvironment_tracef(trace,"PREVENT DIVIDE BY ZERO!",puVar7);
      FUN_01300680();
    }
    if (*(char *)((int)this + 0x24) == '\0') {
      iVar3 = FUN_0123c340();
      iVar4 = FUN_0123c340();
      CRT_floor((double)((float)iVar3 / (float)iVar4));
    }
    else {
      iVar3 = FUN_0123c340();
      iVar4 = FUN_0123c340();
      unknown_floatMathWrapper((float)iVar3 / (float)iVar4);
    }
    FUN_00d83c90();
    FUN_01251720();
    FUN_0123c340();
    uVar5 = FUN_0123c340();
    FUN_0123c340(uVar5);
    pvVar6 = trace;
    EvaluationEnvironment_tracef
              (trace,"(round up: %d) %d / %d = %d",(uint)*(byte *)((int)this + 0x24));
    EvaluationEnvironment_traceExitf(trace,") => true",pvVar6);
    local_c = (void *)((uint)local_c & 0xffffff00);
    FUN_01300cd0();
    local_c = (void *)0xffffffff;
    FUN_01300cd0();
    ExceptionList = pvStack_14;
    return true;
  }
  EvaluationEnvironment_traceExitf(trace,") => false",puVar7);
  local_c = (void *)((uint)local_c & 0xffffff00);
  FUN_01300cd0();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return false;
}

