// addr: 0x014691a0
// name: PhaseState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PhaseState_copy_ctor(void * this, void * other) */

void * __thiscall PhaseState_copy_ctor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a PhaseState, installing its vtable, clearing phase fields,
                       and assigning its state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  StateMachineState_ctor(this,other);
  local_4 = 0;
  *(undefined ***)this = PhaseState::vftable;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "PhaseState",10);
  ExceptionList = local_c;
  return this;
}

