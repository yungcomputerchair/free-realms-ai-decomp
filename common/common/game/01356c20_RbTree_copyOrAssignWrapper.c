// addr: 0x01356c20
// name: RbTree_copyOrAssignWrapper
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RbTree_copyOrAssignWrapper(void * dst, void * src) */

void * RbTree_copyOrAssignWrapper(void *dst,void *src)

{
                    /* Thin wrapper that calls 01354f70 with two arguments and returns the
                       destination pointer. It likely supports copy construction/assignment for one
                       of the tree wrappers, but the concrete type is unknown. */
  FUN_01354f70(dst,src);
  return dst;
}

