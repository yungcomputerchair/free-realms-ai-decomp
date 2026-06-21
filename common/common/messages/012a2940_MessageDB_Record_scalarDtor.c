// addr: 0x012a2940
// name: MessageDB_Record_scalarDtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_Record_scalarDtor(void * this, char flags_) */

void * __thiscall MessageDB_Record_scalarDtor(void *this,char flags_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for a message record: destroys the contained
                       string and optionally frees the object. This is compiler-generated destructor
                       glue. */
  puStack_8 = &LAB_0166b5cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  MessageDB_Record_dtor((void *)((int)this + 0xc));
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = local_c;
  return this;
}

