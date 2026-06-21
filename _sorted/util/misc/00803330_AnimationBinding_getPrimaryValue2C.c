// addr: 0x00803330
// name: AnimationBinding_getPrimaryValue2C
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AnimationBinding_getPrimaryValue2C(void * this) */

int __cdecl AnimationBinding_getPrimaryValue2C(void *this)

{
                    /* Returns the dword at child+0x2c when the object and its +0x14 child exist;
                       otherwise returns zero. */
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    return *(int *)(*(int *)((int)this + 0x14) + 0x2c);
  }
  return 0;
}

