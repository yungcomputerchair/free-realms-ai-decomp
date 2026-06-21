// addr: 0x01463c80
// name: ReshuffleState_copy_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ReshuffleState_copy_ctor(void * this, void * other) */

void * __thiscall ReshuffleState_copy_ctor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a ReshuffleState and assigns its vtable and state name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d836;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(other);
  *(undefined ***)this = ReshuffleState::vftable;
  *(undefined4 *)((int)this + 0x110) = 0xf;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined1 *)((int)this + 0xfc) = 0;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "ReshuffleState",0xe);
  ExceptionList = local_c;
  return this;
}

