// addr: 0x014f4cf0
// name: NetworkCommand_EULA_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandEULA.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_EULA_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_EULA_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones NetworkCommand_EULA, copying a string and two scalar fields.
                       Evidence: RTTI names NetworkCommand_EULA and assert string is clone in
                       NetworkCommandEULA.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_EULA::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandEULA.cpp",0x46);
  }
  NetworkCommand_cloneBaseFields(this_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this_00 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 4),0,0xffffffff);
  *(undefined4 *)((int)this_00 + 0x20) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this_00 + 0x24) = *(undefined4 *)((int)this + 0x24);
  return;
}

