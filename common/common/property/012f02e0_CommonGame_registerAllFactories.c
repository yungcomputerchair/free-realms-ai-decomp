// addr: 0x012f02e0
// name: CommonGame_registerAllFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommonGame_registerAllFactories(void) */

void CommonGame_registerAllFactories(void)

{
                    /* Registers common game, archetype, expression, deck, property, lobby, guild,
                       account, card, and command factories/singletons. */
  if (DAT_01cbd964 != '\x01') {
    Achievement_registerFactory();
    PropertyCore_registerFactories();
    FUN_013ee020();
    CommandObject_registerFactories();
    FUN_013edee0();
    Order_registerFactories();
    CardGameObject_registerFactories();
    Guild_registerFactory();
    LobbyAndMatch_registerFactories();
    MessageText_registerFactory();
    NetworkCommand_registerFactories();
    AccountCommand_registerFactories();
    ArchCommand_registerAllFactories();
    DeckCommand_registerAllFactories();
    ECommCommand_registerFactoriesAll();
    GameCommand_registerFactories();
    GatewayCommand_registerFactories();
    GuildCommand_registerFactories();
    LobbyCommand_registerFactories();
    LoginCommand_registerFactories();
    MatchCommand_registerFactories();
    PollCommand_registerAllFactories();
    SynchronizationCommand_registerFactories();
    TradeCommand_registerFactories();
    ExpressionTree_registerFactories();
    Poll_registerFactories();
    CoreComponent_registerFactories();
    RuleEvaluation_registerFactories();
    FUN_013ed7c0();
    CardGameState_registerFactories();
    PostedTrade_registerFactory();
    CWCommandObject_registerCoreFactories();
    CommonGame_registerFactories();
    CWGameCommand_SetupGame_registerFactory();
    CWMatchCommand_LaunchGame_registerFactory();
    CWExpression_registerFactories();
    CWArchetypeAndDeck_registerFactories();
    CWStateMachine_registerFactories();
    CWDeckBuilderUtilities_createSingleton();
    DAT_01cbd964 = '\x01';
  }
  return;
}

