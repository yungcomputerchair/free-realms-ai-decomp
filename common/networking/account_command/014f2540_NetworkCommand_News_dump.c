// addr: 0x014f2540
// name: NetworkCommand_News_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_News_dump(int * param_1, void * param_2) */

void __thiscall NetworkCommand_News_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for NetworkCommand_News, dumping two
                       string/vector-style members and a vector/list member after the NetworkCommand
                       base state. */
  (**(code **)(*(int *)this + 8))(param_1);
  STLVector_string_serialize((int)this + 4);
  STLVector_string_serialize((int)this + 0x14);
  STLVector_int_serialize(&stack0xfffffff8,(int)this + 0x24);
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

