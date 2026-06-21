// addr: 0x014f39b0
// name: NetworkCommand_LeaderBoardData_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_LeaderBoardData_dump(int * param_1, void * param_2) */

void __thiscall NetworkCommand_LeaderBoardData_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for NetworkCommand_LeaderBoardData, dumping
                       several collection/string members after the NetworkCommand base state. */
  (**(code **)(*(int *)this + 8))(param_1);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x34);
  STLVector_string_serialize((int)this + 0x44);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x54);
  STLVector_int_serialize(&stack0x00000000,(int)this + 4);
  STLVector_string_serialize((int)this + 0x14);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x24);
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

