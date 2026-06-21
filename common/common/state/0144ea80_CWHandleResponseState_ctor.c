// addr: 0x0144ea80
// name: CWHandleResponseState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWHandleResponseState_ctor(void * this) */

void * __fastcall CWHandleResponseState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWHandleResponseState, installs its vftable, and assigns the state
                       name string. Evidence is CWHandleResponseState::vftable and string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b2f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  HandleResponseState_ctor(this);
  local_4 = 0;
  *(undefined ***)this = CWHandleResponseState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWHandleResponseState",0x15);
  ExceptionList = local_c;
  return this;
}

