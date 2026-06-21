// addr: 0x013f7fa0
// name: StateMachine_createAndNotify
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall StateMachine_createAndNotify(int param_1)

{
  void *this;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a StateMachine and notifies/links the owner after construction. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168f8db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x1bc);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    this_00 = StateMachine_ctor(this);
  }
  local_4 = 0xffffffff;
  FUN_013ef940(this_00,*(int *)(param_1 + 4));
  ExceptionList = local_c;
  return this_00;
}

