// addr: 0x012a3910
// name: MessageDB_MatchRecord_constructArray
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_MatchRecord_constructArray(void * first, int count_, void *
   source) */

void __cdecl MessageDB_MatchRecord_constructArray(void *first,int count_,void *source)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Constructs an array of 0x20-byte match-record elements by repeatedly invoking
                       the copy-constructor thunk. Used when vector storage grows or appends. */
  puStack_c = &LAB_0166ba00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; count_ != 0; count_ = count_ + -1) {
    MessageDB_MatchRecord_copyCtor_thunk(first,source);
    first = (void *)((int)first + 0x20);
  }
  ExceptionList = local_10;
  return;
}

