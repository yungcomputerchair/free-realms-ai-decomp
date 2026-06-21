// addr: 0x00520f90
// name: StdAllocator_destroyAndReturn
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdAllocator_destroyAndReturn(void * ret, void * object) */

void * __cdecl StdAllocator_destroyAndReturn(void *ret,void *object)

{
  void *unaff_retaddr;
  
                    /* Calls a destructor/helper on the object pointer and returns the first
                       argument unchanged. This matches an STL allocator destroy adapter used inside
                       container operations. */
  StdRbTree_insertValueMaybeRebalance(ret,object,unaff_retaddr);
  return ret;
}

