// addr: 0x012c21e0
// name: CollectionElement_destroyWrapper
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionElement_destroyWrapper(void * ptr, void * value) */

void CollectionElement_destroyWrapper(void *ptr,void *value)

{
                    /* Small wrapper that delegates conditional destruction/construction cleanup to
                       FUN_012c1bb0. The exact element type is unclear from this weak helper alone.
                        */
  FUN_012c1bb0(ptr,value);
  return;
}

