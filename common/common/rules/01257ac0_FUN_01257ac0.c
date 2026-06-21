// addr: 0x01257ac0
// name: FUN_01257ac0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int unknown_intVector_size(void * vectorObj) */

int __fastcall unknown_intVector_size(void *vectorObj)

{
                    /* Returns the element count of a vector-like object with begin at +4 and end at
                       +8, or zero if begin is null. */
  if (*(int *)((int)vectorObj + 4) == 0) {
    return 0;
  }
  return *(int *)((int)vectorObj + 8) - *(int *)((int)vectorObj + 4) >> 2;
}

