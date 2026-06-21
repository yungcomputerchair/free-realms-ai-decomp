// addr: 0x01401150
// name: FUN_01401150
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void sub_01401150(void * this, void * a2, void * first, void * a4, void *
   last, void * dest) */

void sub_01401150(void *this,void *a2,void *first,void *a4,void *last,void *dest)

{
                    /* STL-style range construction wrapper that forwards source and destination
                       iterator parameters to StdVector12_uninitializedCopyConstructRange. */
  StdVector12_uninitializedCopyConstructRange((int)a2,(int)a4,(int)last);
  return;
}

