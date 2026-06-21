// addr: 0x0144ed90
// name: CWDrawCardState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWDrawCardState_ctor(void * this) */

void * __fastcall CWDrawCardState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWDrawCardState, installs its vftable, and assigns the state name
                       string 'CWDrawCardState'. Evidence is vftable and string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DrawCardState_ctor(this);
  local_4 = 0;
  *(undefined ***)this = CWDrawCardState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWDrawCardState",0xf);
  ExceptionList = local_c;
  return this;
}

