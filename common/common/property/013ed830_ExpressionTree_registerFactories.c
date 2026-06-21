// addr: 0x013ed830
// name: ExpressionTree_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ExpressionTree_registerFactories(void) */

void ExpressionTree_registerFactories(void)

{
                    /* Registers the expression tree and query/action node factory family. The
                       callees include Expression, ExpressionTreeNode, arithmetic/comparison/logical
                       expressions, query nodes, action nodes, MacroNode, ValueNode, and
                       SetEnvironmentNode factories. */
  ActionNode_registerFactory();
  ActionPlayNode_registerFactory();
  AddExpression_registerFactory();
  AndExpression_registerFactory();
  ConcatExpression_registerFactory();
  DivideExpression_registerFactory();
  DivideRoundExpression_registerFactory();
  EachExpression_registerFactory();
  EmitTextMessageNode_registerFactory();
  EqualToExpression_registerFactory();
  Expression_registerFactory();
  ExpressionTreeNode_registerFactory();
  GreaterEqualExpression_registerFactory();
  GreaterThanExpression_registerFactory();
  HasPropertyExpression_registerFactory();
  IfThenExpression_registerFactory();
  IsBorneByExpression_registerFactory();
  LastActionQueryNode_registerFactory();
  LessEqualExpression_registerFactory();
  LessThanExpression_registerFactory();
  MacroNode_registerFactory();
  MaxExpression_registerFactory();
  MinExpression_registerFactory();
  ModulusExpression_registerFactory();
  MoveActionNode_registerFactory();
  MultiplyExpression_registerFactory();
  NegateExpression_registerFactory();
  NotEqualToExpression_registerFactory();
  OrExpression_registerFactory();
  PileQueryNode_registerFactory();
  QueryNode_registerFactory();
  QueryPlayabilityNode_registerFactory();
  QueryPropertiesNode_registerFactory();
  RepeatExpression_registerFactory();
  SetEnvironmentNode_registerFactory();
  SubtractExpression_registerFactory();
  SumExpression_registerFactory();
  TargetQueryNode_registerFactory();
  ValueNode_registerFactory();
  WhileExpression_registerFactory();
  return;
}

