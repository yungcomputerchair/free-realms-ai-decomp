// addr: 0x004cb83d
// name: GWaitList_create
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GWaitList_create(void ** outList) */

void * __fastcall GWaitList_create(void **outList)

{
  void *pvVar1;
  
                    /* Allocates a 0x24-byte wait-list helper and constructs it, storing the result
                       through the output pointer or zero on allocation failure. GEvent and
                       GSemaphore constructors both use this helper. */
  pvVar1 = Mem_Alloc(0x24);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GWaitList_ctor(pvVar1);
  }
  *outList = pvVar1;
  return outList;
}

