// addr: 0x01495e00
// name: NotEqualNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NotEqualNode_evaluate(void * this, void * env, void * trace) */

bool __thiscall NotEqualNode_evaluate(void *this,void *env,void *trace)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  undefined1 *puVar5;
  int iStack_1c;
  undefined1 local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates two child value expressions, confirms both produced comparable type
                       2 values, compares them, stores a boolean ReturnValue, and logs true/false
                       for '(not equal'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2810;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_traceEnterf(trace,"(not equal",uVar2);
  puVar5 = local_18;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(puVar5,trace);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(&stack0xffffffd4,trace);
    if (((cVar1 != '\0') && (iStack_1c == 2)) && (unaff_EBX == 2)) {
      iVar3 = FUN_0123c340();
      iVar4 = FUN_0123c340();
      if (iVar4 != iVar3) {
        EvaluationEnvironment_traceExitf(trace,") => true",puVar5);
        iVar3 = local_4;
        FUN_01300680(1);
        *(undefined1 *)(iVar3 + 8) = 1;
        local_c = (void *)((uint)local_c & 0xffffff00);
        FUN_01300cd0();
        local_c = (void *)0xffffffff;
        FUN_01300cd0();
        ExceptionList = pvStack_14;
        return true;
      }
      EvaluationEnvironment_traceExitf(trace,") => false",puVar5);
      iVar3 = local_4;
      FUN_01300680(1);
      *(undefined1 *)(iVar3 + 8) = 0;
      goto LAB_01495f2d;
    }
  }
  EvaluationEnvironment_traceExitf(trace,") => false",puVar5);
LAB_01495f2d:
  local_c = (void *)((uint)local_c & 0xffffff00);
  FUN_01300cd0();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return false;
}

