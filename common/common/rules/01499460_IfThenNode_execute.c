// addr: 0x01499460
// name: IfThenNode_execute
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool IfThenNode_execute(void * this, void * returnValue, void * env) */

bool __thiscall IfThenNode_execute(void *this,void *returnValue,void *env)

{
  char cVar1;
  char *pcVar2;
  void *unaff_EBX;
  undefined1 *puVar3;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes an if/then node using the condition child and then selecting the
                       true or false branch through command/execution virtuals. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_traceEnterf(env,"(gvt:IfThen",DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  FUN_012fa910();
  local_4 = 0;
  puVar3 = local_18;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(puVar3,env);
  if (cVar1 == '\x01') {
    EvaluationEnvironment_tracef(env,"then",puVar3);
    cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x3c))(local_4,env);
  }
  else {
    EvaluationEnvironment_tracef(env,"else",puVar3);
    cVar1 = (**(code **)(**(int **)((int)this + 0x24) + 0x3c))(local_4,env);
  }
  pcVar2 = "true";
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  EvaluationEnvironment_traceExitf(env,") => %s",pcVar2);
  uStack_14 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = unaff_EBX;
  return (bool)cVar1;
}

