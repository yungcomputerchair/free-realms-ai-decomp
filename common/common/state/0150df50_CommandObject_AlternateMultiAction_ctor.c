// addr: 0x0150df50
// name: CommandObject_AlternateMultiAction_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_AlternateMultiAction_ctor(void * this) */

void * __fastcall CommandObject_AlternateMultiAction_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_AlternateMultiAction, installs its vftable,
                       initializes fields, and assigns the name string
                       "CommandObject_AlternateMultiAction". Evidence is the vftable and matching
                       referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b61a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = CommandObject_AlternateMultiAction::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_AlternateMultiAction::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_AlternateMultiAction",0x22);
  *(undefined1 *)((int)this + 0x118) = 0;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0x113;
  ExceptionList = local_c;
  return this;
}

