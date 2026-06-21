// addr: 0x0132bfc0
// name: CWGame_getNodeTargetCards
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGame_getNodeTargetCards(int nodeId_, void * outCards, void * trace) */

void CWGame_getNodeTargetCards(int nodeId_,void *outCards,void *trace)

{
  int *piVar1;
  
                    /* Traces 'CWGame::getNodeTargetCards(%d)', handles a special node id 0x1ae56 by
                       fetching variable 0x39 and calling its card-list virtual, otherwise delegates
                       to the generic card-list resolver. */
  EvaluationEnvironment_tracef(trace,"CWGame::getNodeTargetCards(%d)",nodeId_);
  if (nodeId_ != 0x1ae56) {
    FUN_0135f490(nodeId_,outCards,trace);
    return;
  }
  piVar1 = EvaluationEnvironment_getIntegerAsObject((void *)0x39);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x3c))(outCards);
  }
  return;
}

