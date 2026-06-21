// addr: 0x01386ab0
// name: StateBlockVector_copyConstructRangeWrapper
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateBlockVector_copyConstructRangeWrapper(void * thisPtr, void *
   srcFirst, void * srcLast, void * dest) */

void __thiscall
StateBlockVector_copyConstructRangeWrapper
          (void *this,void *thisPtr,void *srcFirst,void *srcLast,void *dest)

{
                    /* Compiler wrapper that copy-constructs a range of 0x38-byte state/block
                       elements into destination storage. */
  FUN_012a30f0(srcFirst,dest);
  return;
}

