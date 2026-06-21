// addr: 0x013515b0
// name: CheckedArrayIterator8_get
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CheckedArrayIterator8_get(int * iterator) */

int __fastcall CheckedArrayIterator8_get(int *iterator)

{
                    /* Validates a checked array/vector iterator against its owner end offset and
                       returns the current byte offset unchanged. It aborts if the owner is null or
                       the offset is out of range. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*iterator + 8) <= (uint)iterator[1]) {
    FUN_00d83c2d();
    return iterator[1];
  }
  return iterator[1];
}

