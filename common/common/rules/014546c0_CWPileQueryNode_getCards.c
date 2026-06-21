// addr: 0x014546c0
// name: CWPileQueryNode_getCards
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWPileQueryNode_getCards(void * this, void * outCards, void * env) */

void __thiscall CWPileQueryNode_getCards(void *this,void *outCards,void *env)

{
  int iVar1;
  int *piVar2;
  void **unaff_EDI;
  void *pvVar3;
  
                    /* Retrieves cards for a pile query node, handling special pile ids and falling
                       back to query evaluation. */
  pvVar3 = env;
  EvaluationEnvironment_tracef(env,"CWPileQueryNode::getCards %d",*(undefined4 *)((int)this + 0x1c))
  ;
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 < 0x3d) {
    if (iVar1 != 0x3c) {
      if (iVar1 == 0x3a) {
        piVar2 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
        if (piVar2 == (int *)0x0) {
          return;
        }
        (**(code **)(*piVar2 + 0x34))(outCards);
        return;
      }
      if (iVar1 == 0x3b) {
        piVar2 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
        if (piVar2 == (int *)0x0) {
          return;
        }
        (**(code **)(*piVar2 + 0x34))(outCards);
        return;
      }
LAB_01454742:
      PileQueryNode_getCards(this,outCards,pvVar3);
      return;
    }
    pvVar3 = (void *)0x39;
  }
  else {
    if (iVar1 != 0x40) {
      if (iVar1 == 0x1ae56) {
        piVar2 = EvaluationEnvironment_getIntegerAsObject((void *)0x39);
        if (piVar2 == (int *)0x0) {
          return;
        }
        (**(code **)(*piVar2 + 0x3c))(outCards);
        return;
      }
      goto LAB_01454742;
    }
    pvVar3 = (void *)0x3a;
  }
  env = EvaluationEnvironment_getIntegerAsObject(pvVar3);
  if (env != (void *)0x0) {
    PointerVector_pushBack(outCards,&env,unaff_EDI);
  }
  return;
}

