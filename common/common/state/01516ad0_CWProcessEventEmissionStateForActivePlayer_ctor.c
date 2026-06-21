// addr: 0x01516ad0
// name: CWProcessEventEmissionStateForActivePlayer_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWProcessEventEmissionStateForActivePlayer_ctor(void * this) */

void * __fastcall CWProcessEventEmissionStateForActivePlayer_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWProcessEventEmissionStateForActivePlayer, calls the
                       active-player base constructor, installs vftable, and assigns the state name
                       string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b76f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ProcessEventEmissionStateForActivePlayer_ctor(this);
  local_4 = 0;
  *(undefined ***)this = CWProcessEventEmissionStateForActivePlayer::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "CWProcessEventEmissionStateForActivePlayer",0x2a);
  ExceptionList = local_c;
  return this;
}

