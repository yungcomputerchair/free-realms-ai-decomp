// addr: 0x0152f970
// name: EventCommand_SendByeNotification_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_SendByeNotification_ctor(void * this) */

void * __fastcall EventCommand_SendByeNotification_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_SendByeNotification, clears numeric fields,
                       initializes an inline std::string to empty, and assigns the derived vtable.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bb053;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = EventCommand_SendByeNotification::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x10),
             "",0);
  ExceptionList = local_c;
  return this;
}

