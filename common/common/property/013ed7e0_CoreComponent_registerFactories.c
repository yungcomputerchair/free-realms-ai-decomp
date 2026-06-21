// addr: 0x013ed7e0
// name: CoreComponent_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CoreComponent_registerFactories(void) */

void CoreComponent_registerFactories(void)

{
                    /* Registers core component factories such as Action, Archetype, ArgTree,
                       Campaign, Deck, CollectionItem, InstanceID, and FormatSpecificData. */
  Action_registerFactory();
  Archetype_registerFactory();
  ArgTree_registerFactory();
  Campaign_registerFactory();
  CampaignScenario_registerFactory();
  CollectionItem_registerFactory();
  Deck_registerFactory();
  FormatSpecificData_registerFactory();
  InstanceID_registerFactory();
  InstanceSubID_registerFactory();
  InstanceSubIDFlags_registerFactory();
  return;
}

