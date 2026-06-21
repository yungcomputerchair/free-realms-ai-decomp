// addr: 0x0150a3a0
// name: CommandObject_DrawCard_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_DrawCard_ctor(void * this) */

void * __fastcall CommandObject_DrawCard_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_DrawCard, installs its vftable, initializes fields,
                       and assigns the name string "CommandObject_DrawCard". Evidence is the vftable
                       and matching referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = CommandObject_DrawCard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_DrawCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_DrawCard",0x16);
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 1;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined1 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0x16d;
  ExceptionList = local_c;
  return this;
}

