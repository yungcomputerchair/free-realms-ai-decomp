// addr: 0x00773270
// name: FUN_00773270
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00773270(void * this, int id_, int * optionalValue) */

void __thiscall FUN_00773270(void *this,int id_,int *optionalValue)

{
                    /* Stores a value at offset 0x94 and stores either an optional pointed value or
                       zero at offset 0x9c. The class and field names are not evident. */
  *(int *)((int)this + 0x94) = id_;
  if (optionalValue != (int *)0x0) {
    *(int *)((int)this + 0x9c) = *optionalValue;
    return;
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  return;
}

