// addr: 0x01383290
// name: ValueDataVector_copyConstructRangeWrapper
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueDataVector_copyConstructRangeWrapper(void * thisPtr, void *
   srcFirst, void * srcLast, void * dest) */

void ValueDataVector_copyConstructRangeWrapper
               (void *thisPtr,void *srcFirst,void *srcLast,void *dest)

{
  void *in_stack_00000014;
  
                    /* Compiler wrapper that copy-constructs a range of 0x10-byte elements into
                       destination storage. */
  ValueDataVector_uninitializedCopyRange16(srcFirst,dest,in_stack_00000014);
  return;
}

