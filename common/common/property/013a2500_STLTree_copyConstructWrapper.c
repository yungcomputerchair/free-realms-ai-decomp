// addr: 0x013a2500
// name: STLTree_copyConstructWrapper
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * STLTree_copyConstructWrapper(void * this, void * source) */

void * __thiscall STLTree_copyConstructWrapper(void *this,void *source)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs an STL-style tree wrapper from another tree and returns this.
                       The only substantive operation is FUN_013a1f20(source) under an SEH frame,
                       consistent with a compiler-generated copy-constructor thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016858e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PropertyContainerMap_ctor(this,source);
  ExceptionList = local_c;
  return this;
}

