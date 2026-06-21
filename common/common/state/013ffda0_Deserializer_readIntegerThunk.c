// addr: 0x013ffda0
// name: Deserializer_readIntegerThunk
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Deserializer_readIntegerThunk(void * unused, void * reader) */

void __cdecl Deserializer_readIntegerThunk(void *unused,void *reader)

{
                    /* Thin thunk that forwards its second argument to Deserializer_readInteger.
                       Likely an adapter for a templated deserialize operation. */
  Deserializer_readInteger(unused,reader);
  return;
}

