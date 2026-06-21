// addr: 0x01530940
// name: EventCommand_RespondEventSessionInfo_assignString58FromTemp
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionInfo_assignString58FromTemp(void * this,
   void * stringTemp, void * heapBuffer) */

void __thiscall
EventCommand_RespondEventSessionInfo_assignString58FromTemp
          (void *this,void *stringTemp,void *heapBuffer)

{
  uint in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Assigns a temporary std::string into the EventCommand_RespondEventSessionInfo
                       field at offset 0x58, then frees the temporary buffer when it used heap
                       storage. Called only from the class clone routine after copying the source
                       string at +0x58. */
  puStack_8 = &LAB_016bb498;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x58),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stringTemp,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(heapBuffer);
  }
  ExceptionList = local_c;
  return;
}

