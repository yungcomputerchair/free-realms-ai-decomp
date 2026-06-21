// addr: 0x012ac5d0
// name: CollectionDB_String_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CollectionDB_String_scalarDeletingDtor(void * this, char flags) */

void * __thiscall CollectionDB_String_scalarDeletingDtor(void *this,char flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for a CollectionDB string-like object. It destroys
                       the SSO string buffer through FUN_012ac210 and frees this if requested. */
  puStack_8 = &LAB_0166c76b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  StdString_dtor_012ac210((void *)((int)this + 0xc));
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

