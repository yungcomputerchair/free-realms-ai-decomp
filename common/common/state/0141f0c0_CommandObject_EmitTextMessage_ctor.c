// addr: 0x0141f0c0
// name: CommandObject_EmitTextMessage_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_EmitTextMessage_ctor(void * this) */

void * __fastcall CommandObject_EmitTextMessage_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_EmitTextMessage, installs its vftable, initializes
                       string and fields, and sets the display name to
                       'CommandObject_EmitTextMessage'. Evidence is vftable and string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01694274;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *(undefined ***)this = CommandObject_EmitTextMessage::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_EmitTextMessage::vftable;
  *(undefined4 *)((int)this + 0x13c) = 0xf;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined1 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  local_4 = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_EmitTextMessage",0x1d);
  *(undefined4 *)((int)this + 0x140) = 0;
  ExceptionList = local_c;
  return this;
}

