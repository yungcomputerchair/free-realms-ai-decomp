// addr: 0x01382ba0
// name: ValueDataVector_uninitializedCopyRange16
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValueDataVector_uninitializedCopyRange16(void * first, void * last,
   void * dest) */

void * __cdecl ValueDataVector_uninitializedCopyRange16(void *first,void *last,void *dest)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copy-constructs a range of 0x10-byte elements into uninitialized destination
                       storage and returns the advanced destination pointer. */
  puStack_c = &LAB_01682b50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; first != last; first = (void *)((int)first + 0x10)) {
    FUN_01382b80(dest,first);
    dest = (void *)((int)dest + 0x10);
  }
  ExceptionList = local_10;
  return dest;
}

