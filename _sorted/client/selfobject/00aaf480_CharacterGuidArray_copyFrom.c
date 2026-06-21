// addr: 0x00aaf480
// name: CharacterGuidArray_copyFrom
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CharacterGuidArray_copyFrom(void * this, void * other) */

void * __thiscall CharacterGuidArray_copyFrom(void *this,void *other)

{
                    /* Copies/initializes a CharacterGuid SoeUtil array from another array's
                       data/count, or initializes it empty when the source count is zero. Exact
                       owner class is not evident. */
  *(undefined4 *)((int)this + 8) = 0;
  if (0 < *(int *)((int)other + 8)) {
    FUN_00aac1a0(*(undefined4 *)((int)other + 4),*(int *)((int)other + 8));
    return this;
  }
  FUN_00aac1a0(0,0);
  return this;
}

