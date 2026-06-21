// addr: 0x0150f640
// name: CommandObject_AddGameText_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_AddGameText_ctor(void * this) */

void * __fastcall CommandObject_AddGameText_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_AddGameText, installs its vftable, initializes
                       fields, and assigns the name string "CommandObject_AddGameText". Evidence is
                       the vftable and matching referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b65a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = CommandObject_AddGameText::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_AddGameText::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_AddGameText",0x19);
  ExceptionList = local_c;
  return this;
}

