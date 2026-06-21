// addr: 0x013eac10
// name: DeckValidation_initDefaultRules
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DeckValidation_initDefaultRules(void) */

void DeckValidation_initDefaultRules(void)

{
  uint unaff_ESI;
  void *in_stack_00000004;
  
                    /* Initializes default deck validation rule entries for two deck categories,
                       setting each to the value 3 and then building the associated rule data. This
                       is in the deck validation cluster that emits draw-deck/card-title limit
                       messages. */
  PropertyMap_setValueForKey(3,0);
  DeckValidationRules_addFormatRule(in_stack_00000004,(void *)0x0,unaff_ESI);
  PropertyMap_setValueForKey(3,1);
  DeckValidationRules_addFormatRule(in_stack_00000004,(void *)0x1,unaff_ESI);
  return;
}

