// addr: 0x013edea0
// name: CardGameObject_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CardGameObject_registerFactories(void) */

void CardGameObject_registerFactories(void)

{
                    /* Registers the card-game object factories for PlayElement, Card, PlayArea
                       variants, GameTurn, AttributeModifier, and filters. */
  AttributeModifier_registerFactory();
  Card_registerFactory();
  GameTurn_registerFactory();
  PlayArea_registerFactory();
  PilePlayArea_registerFactory();
  PlayerPlayArea_registerFactory();
  PlayElement_registerFactory();
  ValidActionFilter_registerFactory();
  ValidAttrModFilter_registerFactory();
  return;
}

