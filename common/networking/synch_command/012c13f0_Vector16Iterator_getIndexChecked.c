// addr: 0x012c13f0
// name: Vector16Iterator_getIndexChecked
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Vector16Iterator_getIndexChecked(void * it) */

int __fastcall Vector16Iterator_getIndexChecked(void *it)

{
                    /* Returns a checked iterator index/offset for a 16-byte element vector. It
                       validates that the iterator has a container and that the index is within the
                       container's bound before returning it. */
  if (*(int *)it == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*(int *)it + 8) <= *(uint *)((int)it + 4)) {
    FUN_00d83c2d();
    return *(int *)((int)it + 4);
  }
  return *(uint *)((int)it + 4);
}

