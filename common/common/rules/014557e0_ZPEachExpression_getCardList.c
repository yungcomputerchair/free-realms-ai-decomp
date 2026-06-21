// addr: 0x014557e0
// name: ZPEachExpression_getCardList
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ZPEachExpression_getCardList(void * this, void * trace) */

void ZPEachExpression_getCardList(void *this,void *trace)

{
  void *in_ECX;
  undefined4 unaff_EDI;
  
                    /* Traces 'ZPEachExpression::getCardList' and delegates to the generic card-list
                       retrieval helper. */
  EvaluationEnvironment_tracef(trace,"ZPEachExpression::getCardList",unaff_EDI);
  EachExpression_getCardList(in_ECX,this,trace);
  return;
}

