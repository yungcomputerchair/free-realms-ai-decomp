// addr: 0x013ffc50
// name: STLPair_intBlob_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_intBlob_serialize(void * serializer, void * record) */

bool __cdecl STLPair_intBlob_serialize(void *serializer,void *record)

{
  bool bVar1;
  int iVar2;
  int unaff_EDI;
  
                    /* Serializes an integer key, a byte count, and then that many raw bytes from
                       the record. It only writes the blob after both integer fields serialize
                       successfully. */
  bVar1 = Serializer_appendInteger(serializer,*(uint *)record);
  if (bVar1) {
    bVar1 = Serializer_appendInteger(serializer,*(uint *)((int)record + 8));
    if (bVar1) {
      iVar2 = GrowableBuffer_append
                        (serializer,*(void **)((int)record + 4),*(void **)((int)record + 8),
                         unaff_EDI);
      return SUB41(iVar2,0);
    }
  }
  return false;
}

