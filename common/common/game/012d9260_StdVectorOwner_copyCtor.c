// addr: 0x012d9260
// name: StdVectorOwner_copyCtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdVectorOwner_copyCtor(void * dst, void * src) */

void * __thiscall StdVectorOwner_copyCtor(void *this,void *dst,void *src)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a small object by copying the first word and cloning the
                       vector-like member at offset +4. The callee FUN_01246d00 performs the vector
                       allocation/copy. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01670bdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)dst;
  FUN_01246d00((int)dst + 4);
  ExceptionList = local_c;
  return this;
}

