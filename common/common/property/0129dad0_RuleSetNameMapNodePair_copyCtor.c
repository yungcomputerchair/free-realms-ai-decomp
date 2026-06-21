// addr: 0x0129dad0
// name: RuleSetNameMapNodePair_copyCtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * RuleSetNameMapNodePair_copyCtor(int * dst, int * srcKey, int srcValue)
    */

int * __thiscall RuleSetNameMapNodePair_copyCtor(void *this,int *dst,int *srcKey,int srcValue)

{
  uint src;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a node key/value pair for the RuleSetDB name-map variant. It
                       copies the key word and copy-constructs the value through
                       RuleSetNameMapValue_copyCtor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166af6b;
  local_c = ExceptionList;
  src = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(int *)this = *dst;
  RuleSetNameMapValue_copyCtor((void *)((int)this + 4),(int)srcKey,src);
  ExceptionList = local_c;
  return this;
}

