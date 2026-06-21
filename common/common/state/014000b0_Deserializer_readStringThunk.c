// addr: 0x014000b0
// name: Deserializer_readStringThunk
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Deserializer_readStringThunk(void * unused, void * reader) */

void __cdecl Deserializer_readStringThunk(void *unused,void *reader)

{
                    /* Thin adapter that forwards its second argument to a deserializer string/value
                       reader at 013c28d0. Exact target name is inferred from deserialize context.
                        */
  Deserializer_readString(unused,reader);
  return;
}

