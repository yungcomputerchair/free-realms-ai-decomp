// addr: 0x0133ab00
// name: FUN_0133ab00
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool appendVirtualItemIfPresent(void * object) */

bool appendVirtualItemIfPresent(void *object)

{
                    /* If the supplied object is non-null, calls its virtual method at offset 0x74,
                       and when that returns a non-null item pushes the item into a vector via
                       helper 013364b0. */
  if (object != (void *)0x0) {
    object = (void *)(**(code **)(*(int *)object + 0x74))();
    if (object != (void *)0x0) {
      FUN_013364b0(&object);
      return true;
    }
  }
  return false;
}

