// addr: 0x012a5f60
// name: CommandObjectEmitTextMessage_expandPluralTokens
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectEmitTextMessage_expandPluralTokens(void * message) */

void __cdecl CommandObjectEmitTextMessage_expandPluralTokens(void *message)

{
                    /* Performs text-token substitutions for pluralization/grammar markers such as
                       '#ies#' in emitted text messages. */
  TextReplacementList_addCStringPair(message,"#s#","s");
  TextReplacementList_addCStringPair(message,"#es#","es");
  TextReplacementList_addCStringPair(message,"#ies#","ies");
  return;
}

