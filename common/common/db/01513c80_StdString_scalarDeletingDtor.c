// addr: 0x01513c80
// name: StdString_scalarDeletingDtor
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdString_scalarDeletingDtor(void * this, char flags_) */

void * __thiscall StdString_scalarDeletingDtor(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys the std::string storage and frees the object itself when the low bit
                       of the deleting-destructor flag is set. */
  puStack_8 = &LAB_016b6d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_01513a90(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

