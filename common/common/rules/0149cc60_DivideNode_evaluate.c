// addr: 0x0149cc60
// name: DivideNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DivideNode_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall DivideNode_evaluate(void *this,void *returnValue,void *env)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EBX;
  void *pvVar7;
  undefined1 *puVar8;
  int iStack_1c;
  undefined1 local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates two integer operands, guards/logs divide-by-zero, and writes the
                       integer division result. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3cc0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_traceEnterf(env,"(Divide",uVar2);
  puVar8 = local_18;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(puVar8,env);
  if ((((cVar1 != '\0') &&
       (cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(&stack0xffffffd4,env),
       cVar1 != '\0')) && (iStack_1c == 2)) && (unaff_EBX == 2)) {
    iVar3 = FUN_0123c340();
    if (iVar3 == 0) {
      EvaluationEnvironment_tracef(env,"PREVENT DIVIDE BY ZERO!",puVar8);
      FUN_01300680(2);
    }
    iVar4 = FUN_0123c340();
    iVar5 = FUN_0123c340();
    iVar3 = local_4;
    FUN_01300680(2);
    *(int *)(iVar3 + 8) = iVar5 / iVar4;
    uVar6 = FUN_0123c340();
    uVar6 = FUN_0123c340(uVar6);
    uVar6 = FUN_0123c340(uVar6);
    pvVar7 = env;
    EvaluationEnvironment_tracef(env,"%d / %d = %d",uVar6);
    EvaluationEnvironment_traceExitf(env,") => true",pvVar7);
    local_c = (void *)((uint)local_c & 0xffffff00);
    FUN_01300cd0();
    local_c = (void *)0xffffffff;
    FUN_01300cd0();
    ExceptionList = pvStack_14;
    return true;
  }
  EvaluationEnvironment_traceExitf(env,") => false",puVar8);
  local_c = (void *)((uint)local_c & 0xffffff00);
  FUN_01300cd0();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return false;
}

