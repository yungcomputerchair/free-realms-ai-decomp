// addr: 0x014f14b0
// name: NetworkCommand_SystemMessage_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandSystemMessage.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_SystemMessage_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_SystemMessage_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones NetworkCommand_SystemMessage and copies its message string.
                       Evidence: RTTI names NetworkCommand_SystemMessage and assert string is clone
                       in NetworkCommandSystemMessage.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_SystemMessage::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandSystemMessage.cpp",0x32);
  }
  NetworkCommand_cloneBaseFields(this_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_00 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  return;
}

