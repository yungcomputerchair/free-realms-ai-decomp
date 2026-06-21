// addr: 0x012b3c70
// name: ByteVector_tempDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ByteVector_tempDtor(void) */

void ByteVector_tempDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped temporary destructor for a vector-like object with
                       begin/end/capacity pointers. It delegates to FUN_012b3c00 to free the backing
                       buffer and reset pointers. */
  puStack_8 = &LAB_0166cddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  PropertyVector_freeStorage((void *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}

