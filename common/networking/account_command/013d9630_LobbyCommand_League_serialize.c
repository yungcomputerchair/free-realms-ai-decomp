// addr: 0x013d9630
// name: LobbyCommand_League_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_League_serialize(int * param_1, int param_2) */

void __thiscall LobbyCommand_League_serialize(void *this,int *param_1,int param_2)

{
  int *piVar1;
  
                    /* Serializes/dumps a LobbyCommand-derived league payload: it emits the
                       LobbyCommand base, two integer fields, and a string/vector-like member at
                       param_1+4. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  LobbyCommand_dump(this,param_1,piVar1);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x10);
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

