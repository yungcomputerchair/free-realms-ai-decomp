// addr: 0x013795d0
// name: PropertyObject_setField8
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyObject_setField8(void * this, int value) */

void __thiscall PropertyObject_setField8(void *this,int value)

{
                    /* Stores the supplied value at object offset +8. Evidence is the direct
                       assignment and single caller FUN_012b8ff0 after property id normalization. */
  *(int *)((int)this + 8) = value;
  return;
}

