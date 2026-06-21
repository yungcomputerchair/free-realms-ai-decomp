// addr: 0x012d9030
// name: StdVectorOwner_copyHeaderAndVector
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdVectorOwner_copyHeaderAndVector(void * dst, void * src_header, void
   * src_vector) */

void * __thiscall
StdVectorOwner_copyHeaderAndVector(void *this,void *dst,void *src_header,void *src_vector)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the first word from one object and copy-constructs a vector-like
                       member from a separate source pointer. Evidence is the call to FUN_01246d00,
                       which allocates/copies 0x1c-byte elements into a vector, and the caller
                       PropertyVectorTree_findOrInsert. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670b4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)dst;
  FUN_01246d00(src_header);
  ExceptionList = local_c;
  return this;
}

