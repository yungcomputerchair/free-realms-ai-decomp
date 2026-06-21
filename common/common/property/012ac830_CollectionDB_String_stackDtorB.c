// addr: 0x012ac830
// name: CollectionDB_String_stackDtorB
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CollectionDB_String_stackDtorB(void) */

void CollectionDB_String_stackDtorB(void)

{
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Another protected cleanup thunk for a CollectionDB string temporary. It
                       delegates solely to FUN_012ac210 and has no class-specific operations. */
  puStack_8 = &LAB_0166c82b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  StdString_dtor_012ac210((void *)(in_stack_00000004 + 0xc));
  ExceptionList = local_c;
  return;
}

