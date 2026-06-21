// addr: 0x014e8dd0
// name: AccountCommand_RequestActivateStadiumPiece_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RequestActivateStadiumPiece_dump(int * param_1, void *
   param_2) */

void __thiscall
AccountCommand_RequestActivateStadiumPiece_dump(void *this,int *param_1,void *param_2)

{
  int *serializer;
  
                    /* Emits a textual/debug dump for AccountCommand_RequestActivateStadiumPiece,
                       dumping NetworkCommand base state and its string/vector member. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,param_1,(int)serializer);
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

