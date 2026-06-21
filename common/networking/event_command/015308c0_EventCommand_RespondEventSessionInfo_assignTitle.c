// addr: 0x015308c0
// name: EventCommand_RespondEventSessionInfo_assignTitle
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionInfo_assignTitle(void * this, int value,
   void * allocation) */

void __thiscall
EventCommand_RespondEventSessionInfo_assignTitle(void *this,int value,void *allocation)

{
  uint in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Assigns a temporary std::string into the RespondEventSessionInfo string
                       member at offset +0x3c and frees the temporary heap buffer when needed. */
  puStack_8 = &LAB_016bb468;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x3c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)&value,
             0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(allocation);
  }
  ExceptionList = local_c;
  return;
}

