// addr: 0x0145d9f0
// name: StateMachineState_ctor
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StateMachineState_ctor(void * this, void * machine) */

void * __thiscall StateMachineState_ctor(void *this,void *machine)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructs a StateMachineState/PersistentComponent object, initializes string
                       fields with 'Basic StateMachineState', stores mMachine, caches
                       machine/game-derived values, and initializes state flags. Evidence is
                       StateMachineState::vftable and StateMachineState.cpp mMachine assertion. */
  puStack_8 = &LAB_0169cef6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = StateMachineState::vftable;
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xf;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  uStack_3 = 0;
  local_4 = 3;
  MessageText_ctor(uVar1);
  local_4 = 4;
  MessageText_ctor();
  *(undefined4 *)((int)this + 0xa4) = 0xf;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0xf;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0xf;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  _local_4 = CONCAT31(uStack_3,8);
  *(undefined4 *)((int)this + 4) = 0;
  *(void **)((int)this + 8) = machine;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "Basic StateMachineState",0x17);
  *(undefined1 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
  }
  piVar2 = StateMachine_getCurrentTurn(*(void **)((int)this + 8));
  uVar3 = (**(code **)(*piVar2 + 0x3c))();
  *(undefined4 *)((int)this + 0x18) = uVar3;
  *(undefined4 *)((int)this + 0xe8) = 0;
  uVar1 = increment_field_104(*(void **)((int)this + 8));
  *(uint *)((int)this + 0xec) = uVar1;
  *(undefined1 *)((int)this + 0xf0) = 0;
  ExceptionList = local_c;
  return this;
}

