// addr: 0x013ffb10
// name: MessageText_serializeString
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool MessageText_serializeString(void * serializer, void * text) */

bool __cdecl MessageText_serializeString(void *serializer,void *text)

{
  bool bVar1;
  
                    /* Serializes a single std::string through Serializer_appendString. It is the
                       element serializer used by STLVector_string_serialize. */
  bVar1 = Serializer_appendString(serializer,text);
  return bVar1;
}

