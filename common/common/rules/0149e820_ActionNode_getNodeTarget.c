// addr: 0x0149e820
// name: ActionNode_getNodeTarget
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionNode_getNodeTarget(int targetKind_, void * env) */

void ActionNode_getNodeTarget(int targetKind_,void *env)

{
  int *piVar1;
  
                    /* Logs the requested action-node target kind and dispatches through the current
                       action/context object to resolve it. */
  EvaluationEnvironment_tracef(env,"ActionNode::getNodeTarget %d",targetKind_);
  piVar1 = EvaluationEnvironment_getGame(env);
  (**(code **)(*piVar1 + 0x200))(targetKind_,env);
  return;
}

