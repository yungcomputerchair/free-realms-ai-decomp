// addr: 0x013eefb0
// name: NetworkCommand_Disconnect_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandDisconnect.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Disconnect_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_Disconnect_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones a NetworkCommand_Disconnect and copies its string payload.
                       Evidence: RTTI names NetworkCommand_Disconnect and assert string is clone in
                       NetworkCommandDisconnect.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_Disconnect::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandDisconnect.cpp",0x2b);
  }
  NetworkCommand_cloneBaseFields(this_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_00 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  return;
}

