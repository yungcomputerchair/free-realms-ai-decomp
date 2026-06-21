// addr: 0x0129d930
// name: RuleSetNameMapValue_copyCtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RuleSetNameMapValue_copyCtor(int dst, int src) */

int __thiscall RuleSetNameMapValue_copyCtor(void *this,int dst,int src)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs the value subobject for the RuleSetDB name-map variant by
                       forwarding to FUN_0129d410. It returns the destination pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166ae98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0129d410(dst);
  ExceptionList = local_c;
  return (int)this;
}

