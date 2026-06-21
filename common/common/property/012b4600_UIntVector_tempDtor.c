// addr: 0x012b4600
// name: UIntVector_tempDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UIntVector_tempDtor(void) */

void UIntVector_tempDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped temporary destructor for another vector-like object with
                       begin/end/capacity pointers. It calls FUN_012b4590, which frees the backing
                       allocation and zeroes the vector fields. */
  puStack_8 = &LAB_0166cfeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  PropertyVector_freeStorage2((void *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}

