// addr: 0x013ff9d0
// name: SerializeDwordPairElement
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SerializeDwordPairElement(void * stream, int * pair) */

void __cdecl SerializeDwordPairElement(void *stream,int *pair)

{
  bool bVar1;
  
                    /* Serializes a two-dword element, short-circuiting if the first write fails. */
  bVar1 = Serializer_appendInteger(stream,*pair);
  if (!bVar1) {
    return;
  }
  Serializer_appendInteger(stream,pair[1]);
  return;
}

