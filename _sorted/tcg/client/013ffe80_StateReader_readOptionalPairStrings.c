// addr: 0x013ffe80
// name: StateReader_readOptionalPairStrings
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateReader_readOptionalPairStrings(void * unused, void *
   stateReaderAndStrings) */

void __cdecl StateReader_readOptionalPairStrings(void *unused,void *stateReaderAndStrings)

{
  bool bVar1;
  
                    /* Reads a string from a state reader and, only if that succeeds, reads a second
                       string at the next 0x1c-byte slot. Evidence is calls to the state readString
                       helper 013c28d0, whose ctx reports Wrong state in readString/Invalid string
                       length. */
  bVar1 = Deserializer_readString(unused,stateReaderAndStrings);
  if (!bVar1) {
    return;
  }
  Deserializer_readString(unused,(void *)((int)stateReaderAndStrings + 0x1c));
  return;
}

