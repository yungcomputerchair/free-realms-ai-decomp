// addr: 0x014f57e0
// name: NetworkCommand_ErrorMsg_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandErrorMsg.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_ErrorMsg_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_ErrorMsg_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones NetworkCommand_ErrorMsg, copying an error string and scalar
                       code. Evidence: RTTI names NetworkCommand_ErrorMsg and assert string is clone
                       in NetworkCommandErrorMsg.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_ErrorMsg::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandErrorMsg.cpp",0x42);
  }
  NetworkCommand_cloneBaseFields(this_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_00 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  *(undefined4 *)((int)this_00 + 0x20) = *(undefined4 *)((int)this + 0x20);
  return;
}

