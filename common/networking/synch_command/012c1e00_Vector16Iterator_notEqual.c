// addr: 0x012c1e00
// name: Vector16Iterator_notEqual
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Vector16Iterator_notEqual(void * this, void * other) */

int __thiscall Vector16Iterator_notEqual(void *this,void *other)

{
                    /* Compares two checked iterators over the same 16-byte-element vector for
                       inequality. It validates both iterators share the same non-null container
                       before comparing their indexes. */
  if ((*(int *)this == 0) || (*(int *)this != *(int *)other)) {
    FUN_00d83c2d();
  }
  return CONCAT31((int3)((uint)*(int *)((int)this + 4) >> 8),
                  *(int *)((int)this + 4) != *(int *)((int)other + 4));
}

