// addr: 0x008032a0
// name: AnimationBinding_isPrimaryReady
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AnimationBinding_isPrimaryReady(void * this) */

int __fastcall AnimationBinding_isPrimaryReady(void *this)

{
                    /* Returns true when the object has a child at +0x14 and that child has its
                       ready flag set at +0x1c. */
  if ((*(int *)((int)this + 0x14) != 0) && (*(char *)(*(int *)((int)this + 0x14) + 0x1c) != '\0')) {
    return 1;
  }
  return 0;
}

