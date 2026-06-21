// addr: 0x0150b2e0
// name: CommandObject_Discard_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Discard_ctor(void * this) */

void * __fastcall CommandObject_Discard_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_Discard, installs its vftable, initializes fields,
                       and assigns the name string "CommandObject_Discard". Evidence is the vftable
                       and matching referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5b06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *(undefined ***)this = CommandObject_Discard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Discard::vftable;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_Discard",0x15);
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined1 *)((int)this + 0x13c) = 0;
  *(undefined1 *)((int)this + 0x13d) = 0;
  ExceptionList = local_c;
  return this;
}

