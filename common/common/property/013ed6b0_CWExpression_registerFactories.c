// addr: 0x013ed6b0
// name: CWExpression_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWExpression_registerFactories(void) */

void CWExpression_registerFactories(void)

{
                    /* Registers card-war expression and query-node factories. */
  CWActionNode_registerFactory();
  CWActionPlayNode_registerFactory();
  CWEachExpression_registerFactory();
  CWLastActionQueryNode_registerFactory();
  CWMacroNode_registerFactory();
  CWPileQueryNode_registerFactory();
  CWSumExpression_registerFactory();
  CWTargetQueryNode_registerFactory();
  CWValueNode_registerFactory();
  return;
}

