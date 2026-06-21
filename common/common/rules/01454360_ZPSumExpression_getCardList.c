// addr: 0x01454360
// name: ZPSumExpression_getCardList
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ZPSumExpression_getCardList(void * this, void * outCards, void * env) */

void __thiscall ZPSumExpression_getCardList(void *this,void *outCards,void *env)

{
  int iVar1;
  int *piVar2;
  void **unaff_EDI;
  void *pvVar3;
  
                    /* Populates a card list for a zone/position sum expression, mapping special
                       pile ids to environment card lists or delegating to expression evaluation. */
  pvVar3 = env;
  EvaluationEnvironment_tracef(env,"ZPSumExpression::getCardList",unaff_EDI);
  iVar1 = *(int *)((int)this + 0x24);
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
LAB_014543de:
      SumExpression_getCardList(this,outCards,pvVar3);
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
      goto LAB_014543de;
    }
    pvVar3 = (void *)0x3a;
  }
  env = EvaluationEnvironment_getIntegerAsObject(pvVar3);
  if (env != (void *)0x0) {
    PointerVector_pushBack(outCards,&env,unaff_EDI);
  }
  return;
}

