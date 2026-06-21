// addr: 0x013ed730
// name: CardGameState_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CardGameState_registerFactories(void) */

void CardGameState_registerFactories(void)

{
                    /* Registers the card-game state machine state factory family. The callees are
                       StateMachine_registerFactory plus many concrete state factories such as
                       PlayCardState, DrawCardState, ExecuteRuleState, GetTargetState, PhaseState,
                       and WhileState. */
  ActionPlayedState_registerFactory();
  AlternateMultiActionState_registerFactory();
  CancellableStateMachineState_registerFactory();
  ChainedActionState_registerFactory();
  CloneState_registerFactory();
  CustomChoiceDialogState_registerFactory();
  DiscardCardState_registerFactory();
  DoublePassState_registerFactory();
  DrawCardState_registerFactory();
  ExecuteRuleState_registerFactory();
  GetTargetState_registerFactory();
  GetTopCardState_registerFactory();
  GetSimultaneousTargetState_registerFactory();
  HandleResponseState_registerFactory();
  MultiActionState_registerFactory();
  MultiPlayerState_registerFactory();
  PhaseState_registerFactory();
  PickListState_registerFactory();
  PlayCardState_registerFactory();
  PlaySingleCardState_registerFactory();
  ProcessEventEmissionState_registerFactory();
  ReshuffleState_registerFactory();
  RevealState_registerFactory();
  StateMachine_registerFactory();
  StateMachineState_registerFactory();
  WhileState_registerFactory();
  return;
}

