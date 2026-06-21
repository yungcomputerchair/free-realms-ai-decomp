// addr: 0x0150dba0
// name: CommandObject_Attach_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Attach_ctor(void * this) */

void * __fastcall CommandObject_Attach_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_Attach, installs its vftable, initializes fields,
                       and assigns the name string "CommandObject_Attach". Evidence is the vftable
                       and matching referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b60e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = CommandObject_Attach::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Attach::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_Attach",0x14);
  ExceptionList = local_c;
  return this;
}

