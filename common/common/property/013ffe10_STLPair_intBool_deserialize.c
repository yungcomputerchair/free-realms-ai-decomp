// addr: 0x013ffe10
// name: STLPair_intBool_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_intBool_deserialize(void * archive, undefined4 int, void * pair)
    */

bool __cdecl STLPair_intBool_deserialize(void *archive,int *int,void *pair)

{
  bool bVar1;
  int local_4;
  
                    /* Deserializes an int/bool pair. It reads the key dword and a temporary dword
                       for the boolean, then stores the boolean member as temp != 0. */
  bVar1 = Deserializer_readInteger(archive,int);
  if (bVar1) {
    bVar1 = Deserializer_readInteger(archive,&local_4);
    if (bVar1) {
      *(bool *)(int + 1) = local_4 != 0;
      return true;
    }
  }
  return false;
}

