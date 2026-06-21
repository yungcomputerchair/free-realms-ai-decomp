// addr: 0x012faa80
// name: CommandObjectList_evaluateToValueData
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CommandObjectList_evaluateToValueData(void * commands, void * env) */

uint __fastcall CommandObjectList_evaluateToValueData(void *commands,void *env)

{
  uint in_EAX;
  uint uVar1;
  
                    /* Builds/evaluates a command object list into ValueData in an evaluation
                       environment. Evidence is its use from CWAIController_handleScript after
                       EvaluationEnvironment setup and PlayElementList_collectCommandObjects. */
  if (*(int *)((int)commands + 4) == 5) {
                    /* WARNING: Could not recover jumptable at 0x012faa8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)((int)commands + 8) + 0x38))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

