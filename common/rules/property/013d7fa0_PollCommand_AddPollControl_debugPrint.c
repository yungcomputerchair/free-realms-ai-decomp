// addr: 0x013d7fa0
// name: PollCommand_AddPollControl_debugPrint
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_AddPollControl_debugPrint(void * this) */

void __thiscall PollCommand_AddPollControl_debugPrint(void *this)

{
  int iVar1;
  undefined4 in_stack_00000004;
  
                    /* Prints the Add Poll Control command header, calls the base debug printer,
                       then appends a State line for Invalid, Start, or End based on the object's
                       state field. */
  FUN_01241650("Poll Command Add Poll Control\n",0x1e);
  thunk_FUN_0140c290(in_stack_00000004);
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    FUN_01241650("State: Invalid\n",0xf);
  }
  else {
    if (iVar1 == 1) {
      FUN_01241650("State: Start\n",0xd);
      return;
    }
    if (iVar1 == 2) {
      FUN_01241650("State: End\n",0xb);
      return;
    }
  }
  return;
}

