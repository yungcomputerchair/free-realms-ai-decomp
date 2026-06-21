// addr: 0x0148de00
// name: SumNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SumNode_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall SumNode_evaluate(void *this,void *returnValue,void *env)

{
  char cVar1;
  char *format;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 local_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates a sum node by logging "(gvt: sum", invoking its child evaluator,
                       and appending true/false to the trace. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a1bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = env;
  EvaluationEnvironment_traceEnterf(env,"(gvt: sum",DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  EvaluationEnvironment_tracef(env,"executing sum node....",pvVar2);
  FUN_012fa910();
  local_4 = 0;
  puVar3 = local_18;
  cVar1 = (**(code **)(*(int *)this + 0x38))(puVar3,env);
  if (cVar1 == '\0') {
    format = ") => false";
  }
  else {
    format = ") => true";
  }
  EvaluationEnvironment_traceExitf(env,format,puVar3);
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return (bool)cVar1;
}

