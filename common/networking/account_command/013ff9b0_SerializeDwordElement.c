// addr: 0x013ff9b0
// name: SerializeDwordElement
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SerializeDwordElement(void * stream, int * value) */

void __cdecl SerializeDwordElement(void *stream,int *value)

{
                    /* Serializes a single dword element using the common scalar writer. */
  Serializer_appendInteger(stream,*value);
  return;
}

