// addr: 0x01497280
// name: MinNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MinNode_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall MinNode_evaluate(void *this,void *returnValue,void *env)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_EBX;
  void *pvVar4;
  undefined1 *puVar5;
  int iStack_1c;
  undefined1 local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates two integer operands and writes the minimum value to the return
                       ValueData. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2cd0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_traceEnterf(env,"(Min",uVar2);
  puVar5 = local_18;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(puVar5,env);
  if ((((cVar1 != '\0') && (iStack_1c == 2)) &&
      (cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(&stack0xffffffd4,env),
      cVar1 != '\0')) && (unaff_EBX == 2)) {
    FUN_0123c340();
    FUN_0123c340();
    uVar3 = FUN_0123c340();
    FUN_01251720(uVar3);
    uVar3 = FUN_0123c340();
    uVar3 = FUN_0123c340(uVar3);
    uVar3 = FUN_0123c340(uVar3);
    pvVar4 = env;
    EvaluationEnvironment_tracef(env,"min (%d, %d) = %d",uVar3);
    EvaluationEnvironment_traceExitf(env,") => true",pvVar4);
    local_c = (void *)((uint)local_c & 0xffffff00);
    FUN_01300cd0();
    local_c = (void *)0xffffffff;
    FUN_01300cd0();
    ExceptionList = pvStack_14;
    return true;
  }
  EvaluationEnvironment_traceExitf(env,") => false",puVar5);
  local_c = (void *)((uint)local_c & 0xffffff00);
  FUN_01300cd0();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return false;
}

