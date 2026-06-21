// addr: 0x01488770
// name: ValueNode_getTarget
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueNode_getTarget(int targetId_, void * trace) */

void ValueNode_getTarget(int targetId_,void *trace)

{
  int *piVar1;
  
                    /* Traces 'ValueNode::getTarget(%d)', obtains the current rules/game context,
                       and dispatches vtable slot 0x200 to resolve the target. */
  EvaluationEnvironment_tracef(trace,"ValueNode::getTarget(%d)",targetId_);
  piVar1 = EvaluationEnvironment_getGame(trace);
  (**(code **)(*piVar1 + 0x200))(targetId_,trace);
  return;
}

