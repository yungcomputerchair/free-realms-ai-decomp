// addr: 0x01488170
// name: WhileNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool WhileNode_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall WhileNode_evaluate(void *this,void *returnValue,void *env)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  void **ppvVar4;
  void *local_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates a while node: repeatedly evaluates the condition and body, logs
                       each iteration/result, and stops after false or 1000 iterations. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1680;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(env,"(While",DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  iVar3 = 0;
  FUN_012fa910();
  local_4 = 0;
  ppvVar4 = local_34;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(ppvVar4,env);
  while ((cVar1 != '\0' && (iVar3 < 1000))) {
    EvaluationEnvironment_tracef(env,"While loop returned true (%d)",iVar3);
    iVar3 = iVar3 + 1;
    bVar2 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(&stack0xffffffc4,env);
    ValueData_toString(&stack0xffffffbc,&stack0xffffffc8);
    pvStack_14._0_1_ = 1;
    EvaluationEnvironment_tracef(env,"While loop evaluation return %d => %s",(uint)bVar2);
    pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      _free(local_34[0]);
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
    cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(&stack0xffffffbc,env);
  }
  EvaluationEnvironment_traceExitf(env,") => true",ppvVar4);
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return true;
}

