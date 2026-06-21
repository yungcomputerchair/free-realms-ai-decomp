// addr: 0x0149b240
// name: EqualsNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EqualsNode_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall EqualsNode_evaluate(void *this,void *returnValue,void *env)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_20 [8];
  undefined1 local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates two children, compares their ValueData objects for equality, and
                       writes a boolean result. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3860;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_traceEnterf(env,"(equals ",uVar4);
  puVar5 = local_18;
  cVar2 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(puVar5,env);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(&stack0xffffffd4,env);
    if (cVar2 != '\0') {
      bVar3 = ValueData_equivalentTo(auStack_20,&stack0xffffffd4);
      iVar1 = local_4;
      if (bVar3) {
        FUN_01300680(1);
        *(undefined1 *)(iVar1 + 8) = 1;
        EvaluationEnvironment_traceExitf(env,") => true",puVar5);
        local_c = (void *)((uint)local_c & 0xffffff00);
        FUN_01300cd0();
        local_c = (void *)0xffffffff;
        FUN_01300cd0();
        ExceptionList = pvStack_14;
        return true;
      }
      FUN_01300680(1);
      *(undefined1 *)(iVar1 + 8) = 0;
    }
  }
  EvaluationEnvironment_traceExitf(env,") => false",puVar5);
  local_c = (void *)((uint)local_c & 0xffffff00);
  FUN_01300cd0();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return false;
}

