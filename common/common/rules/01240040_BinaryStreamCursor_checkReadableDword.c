// addr: 0x01240040
// name: BinaryStreamCursor_checkReadableDword
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int BinaryStreamCursor_checkReadableDword(void * cursor) */

int __fastcall BinaryStreamCursor_checkReadableDword(void *cursor)

{
                    /* Validates that a cursor has a backing buffer and at least four readable bytes
                       remaining, then returns the current offset. */
  if (*(int *)cursor == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*(int *)cursor + 8) <= *(uint *)((int)cursor + 4)) {
    FUN_00d83c2d();
    return *(int *)((int)cursor + 4);
  }
  return *(uint *)((int)cursor + 4);
}

