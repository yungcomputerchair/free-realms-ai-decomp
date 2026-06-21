// addr: 0x0150c780
// name: CommandObject_CreateCard_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_CreateCard_ctor(void * this) */

void * __fastcall CommandObject_CreateCard_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_CreateCard, installs its vftable, initializes
                       fields, and assigns the name string "CommandObject_CreateCard". Evidence is
                       the vftable and matching referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5d98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = CommandObject_CreateCard::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_CreateCard::vftable;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined1 *)((int)this + 300) = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_CreateCard",0x18);
  ExceptionList = local_c;
  return this;
}

