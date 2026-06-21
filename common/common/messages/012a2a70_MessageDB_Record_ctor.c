// addr: 0x012a2a70
// name: MessageDB_Record_ctor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MessageDB_Record_ctor(void * this, int * messageId, void * text) */

void * __thiscall MessageDB_Record_ctor(void *this,int *messageId,void *text)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a message id/text record by copying the integer id and assigning
                       the string member. The string is initialized empty before assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166b62b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)this = *messageId;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),text
             ,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}

