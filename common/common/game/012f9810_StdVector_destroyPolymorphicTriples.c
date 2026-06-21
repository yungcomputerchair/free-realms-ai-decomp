// addr: 0x012f9810
// name: StdVector_destroyPolymorphicTriples
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_destroyPolymorphicTriples(void * vector_owner) */

void __fastcall StdVector_destroyPolymorphicTriples(void *vector_owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper around a helper that iterates a vector whose elements are 12
                       bytes wide, invokes each element's virtual destructor, and frees the backing
                       store. It is used by several destructors and deallocation helpers. */
  puStack_8 = &LAB_0167544b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  StdVector_destroyPolymorphicTriples_impl((void *)((int)vector_owner + 4));
  ExceptionList = local_c;
  return;
}

