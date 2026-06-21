// addr: 0x01410100
// name: NodeValue_getEffectiveTypeId
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NodeValue_getEffectiveTypeId(void * this) */

int __cdecl NodeValue_getEffectiveTypeId(void *this)

{
  int iVar1;
  
                    /* Reads a node/value type id and normalizes special cases: ids 0 and 0x1b map
                       to 0, id 0x29 is preserved, otherwise it re-reads and returns the type id.
                       Exact class is not evident from the sparse context. */
  iVar1 = FUN_013f7ea0();
  if ((iVar1 != 0) && (iVar1 != 0x1b)) {
    if (iVar1 != 0x29) {
      iVar1 = FUN_013f7ea0();
      return iVar1;
    }
    return 0x29;
  }
  return 0;
}

