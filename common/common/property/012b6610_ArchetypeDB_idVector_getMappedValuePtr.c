// addr: 0x012b6610
// name: ArchetypeDB_idVector_getMappedValuePtr
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ArchetypeDB_idVector_getMappedValuePtr(int * key) */

int ArchetypeDB_idVector_getMappedValuePtr(int *key)

{
  int *extraout_EAX;
  void *in_ECX;
  int *unaff_ESI;
  int local_14 [2];
  undefined1 local_c [12];
  
                    /* Builds a lookup key, finds it in the ArchetypeDB id vector, validates the
                       iterator, and returns a pointer to the value field at entry+4. This is a
                       helper for sorted vector map entries. */
  local_14[0] = *key;
  local_14[1] = 0;
  ArchetypeDB_idVector_getOrInsertMappedValue(in_ECX,local_c,local_14,unaff_ESI);
  if (*extraout_EAX == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*extraout_EAX + 8) <= (uint)extraout_EAX[1]) {
    FUN_00d83c2d();
  }
  return extraout_EAX[1] + 4;
}

