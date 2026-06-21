// addr: 0x013857f0
// name: ValueDataVector_copyCtor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValueDataVector_copyCtor(void * dest, void * source) */

void * __thiscall ValueDataVector_copyCtor(void *this,void *dest,void *source)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a vector-like object by delegating to the 0x10-byte element
                       vector copy constructor helper and returns dest. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01683048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013852b0(dest);
  ExceptionList = local_c;
  return this;
}

