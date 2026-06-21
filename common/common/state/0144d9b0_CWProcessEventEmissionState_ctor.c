// addr: 0x0144d9b0
// name: CWProcessEventEmissionState_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWProcessEventEmissionState_ctor(void * this) */

void * __fastcall CWProcessEventEmissionState_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWProcessEventEmissionState, installs its vftable, and sets the
                       state name string. Evidence is CWProcessEventEmissionState::vftable and
                       assigned name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ProcessEventEmissionState_ctor(this);
  local_4 = 0;
  *(undefined ***)this = CWProcessEventEmissionState::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWProcessEventEmissionState",0x1b);
  ExceptionList = local_c;
  return this;
}

