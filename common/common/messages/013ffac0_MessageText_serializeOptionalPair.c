// addr: 0x013ffac0
// name: MessageText_serializeOptionalPair
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MessageText_serializeOptionalPair(void * serializer, void * messageText)
    */

bool __cdecl MessageText_serializeOptionalPair(void *serializer,void *messageText)

{
  bool bVar1;
  
                    /* Serializes the first string in a message-text-like structure and, only if
                       that succeeds, serializes a second string at offset +0x1c. It is used when
                       dumping/serializing text message vectors. */
  bVar1 = Serializer_appendString(serializer,messageText);
  if (!bVar1) {
    return false;
  }
  bVar1 = Serializer_appendString(serializer,(void *)((int)messageText + 0x1c));
  return bVar1;
}

