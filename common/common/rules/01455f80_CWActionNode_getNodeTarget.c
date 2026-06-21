// addr: 0x01455f80
// name: CWActionNode_getNodeTarget
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWActionNode_getNodeTarget(int targetId_, void * trace) */

void CWActionNode_getNodeTarget(int targetId_,void *trace)

{
                    /* Traces 'CWActionNode::getNodeTarget %d' and delegates to the ActionNode
                       target resolver. */
  EvaluationEnvironment_tracef(trace,"CWActionNode::getNodeTarget %d",targetId_);
  ActionNode_getNodeTarget(targetId_,trace);
  return;
}

