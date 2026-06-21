// addr: 0x012a23c0
// name: MessageDB_Record_dtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_Record_dtor(void * record) */

void __fastcall MessageDB_Record_dtor(void *record)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys the string member of a small message record structure by freeing the
                       heap buffer when it is not using the small-string buffer. It resets the
                       string to empty afterward. */
  puStack_8 = &LAB_0166b50b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (0xf < *(uint *)((int)record + 0x1c)) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)record + 8));
  }
  *(undefined4 *)((int)record + 0x1c) = 0xf;
  *(undefined4 *)((int)record + 0x18) = 0;
  *(undefined1 *)((int)record + 8) = 0;
  return;
}

