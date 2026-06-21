// addr: 0x0129d8d0
// name: RuleSetIndexMapNodePair_copyCtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * RuleSetIndexMapNodePair_copyCtor(int * dst, int * srcKey, int srcValue)
    */

int * __thiscall RuleSetIndexMapNodePair_copyCtor(void *this,int *dst,int *srcKey,int srcValue)

{
  uint src;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a key/value pair for a RuleSetDB index map node. It copies the
                       integer key and copy-constructs the value subobject via
                       RuleSetIndexMapValue_copyCtor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166ae6b;
  local_c = ExceptionList;
  src = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(int *)this = *dst;
  RuleSetIndexMapValue_copyCtor((void *)((int)this + 4),(int)srcKey,src);
  ExceptionList = local_c;
  return this;
}

