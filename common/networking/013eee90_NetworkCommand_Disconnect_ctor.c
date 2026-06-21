// addr: 0x013eee90
// name: NetworkCommand_Disconnect_ctor
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NetworkCommand_Disconnect_ctor(void * this) */

void * __fastcall NetworkCommand_Disconnect_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs NetworkCommand_Disconnect by running NetworkCommand_ctor,
                       installing the Disconnect vtable, and initializing its reason string empty.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168f013;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(this);
  *(undefined ***)this = NetworkCommand_Disconnect::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),"",0
            );
  ExceptionList = local_c;
  return this;
}

