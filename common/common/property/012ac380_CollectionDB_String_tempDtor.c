// addr: 0x012ac380
// name: CollectionDB_String_tempDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CollectionDB_String_tempDtor(void) */

void CollectionDB_String_tempDtor(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH-wrapped temporary destructor for a CollectionDB string object. It
                       delegates to the SSO string cleanup helper FUN_012ac210. */
  puStack_8 = &LAB_0166c73b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  StdString_dtor_012ac210((void *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}

