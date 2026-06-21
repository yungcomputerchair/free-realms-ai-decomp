// addr: 0x0150aa10
// name: CommandObject_DiscardPile_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_DiscardPile_ctor(void * this) */

void * __fastcall CommandObject_DiscardPile_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_DiscardPile, installs its vftable, initializes
                       fields, and assigns the name string "CommandObject_DiscardPile". Evidence is
                       the vftable and matching referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b59e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = CommandObject_DiscardPile::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_DiscardPile::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_DiscardPile",0x19);
  *(undefined1 *)((int)this + 0x131) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x118) = 1;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0x14a;
  ExceptionList = local_c;
  return this;
}

