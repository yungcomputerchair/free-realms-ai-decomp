// addr: 0x014f1000
// name: NetworkCommand_Time_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandTime.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_Time_cloneInto(void * this, void * allocator) */

void __thiscall NetworkCommand_Time_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones NetworkCommand_Time, copying several time fields and a
                       string member. Evidence: RTTI names NetworkCommand_Time and assert string is
                       clone in NetworkCommandTime.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_Time::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandTime.cpp",0x51);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 0x38) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this_00 + 0x18) = *(undefined4 *)((int)this + 0x18);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this_00 + 0x1c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x1c),0,0xffffffff);
  *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)((int)this + 0x3c);
  return;
}

