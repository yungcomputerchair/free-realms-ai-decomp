// addr: 0x0129d3c0
// name: RuleSetIndexMapValue_copyCtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int RuleSetIndexMapValue_copyCtor(int dst, int src) */

int __thiscall RuleSetIndexMapValue_copyCtor(void *this,int dst,int src)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a map value subobject by forwarding to FUN_0129cfb0 and
                       returns the destination. It is used while building a new RuleSetDB map node.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166ac58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0129cfb0(dst);
  ExceptionList = local_c;
  return (int)this;
}

