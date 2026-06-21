// addr: 0x0150bdf0
// name: CommandObject_CustomChoiceDialog_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_CustomChoiceDialog_ctor(void * this) */

void * __fastcall CommandObject_CustomChoiceDialog_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_CustomChoiceDialog, installs its vftable,
                       initializes fields, and assigns the name string
                       "CommandObject_CustomChoiceDialog". Evidence is the vftable and matching
                       referenced string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = CommandObject_CustomChoiceDialog::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_CustomChoiceDialog::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_CustomChoiceDialog",0x20);
  *(undefined1 *)((int)this + 0x118) = 0;
  *(undefined1 *)((int)this + 0x81) = 0;
  ExceptionList = local_c;
  return this;
}

