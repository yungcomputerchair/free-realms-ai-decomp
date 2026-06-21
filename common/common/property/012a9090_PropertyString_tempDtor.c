// addr: 0x012a9090
// name: PropertyString_tempDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyString_tempDtor(void) */

void PropertyString_tempDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped temporary destructor for a small-string object. It invokes the
                       string cleanup helper FUN_012a8f50 on a stack local. */
  puStack_8 = &LAB_0166c22b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  StdString_dtor_012a8f50((void *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}

