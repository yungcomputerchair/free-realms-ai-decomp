// addr: 0x012a5fa0
// name: CardText_applyPluralSuffixTokens
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CardText_applyPluralSuffixTokens(void * text) */

void __cdecl CardText_applyPluralSuffixTokens(void *text)

{
                    /* Applies text substitutions including the '#ies#' pluralization token, used by
                       Card_formatDescriptionText and CommandObjectEmitTextMessage_doCommand. Other
                       token addresses are unnamed, so the name is based on the visible token and
                       callers. */
  TextReplacementList_addCStringPair(text,"#s#","");
  TextReplacementList_addCStringPair(text,"#es#","");
  TextReplacementList_addCStringPair(text,"#ies#","y");
  return;
}

