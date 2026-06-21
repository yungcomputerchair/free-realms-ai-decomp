// addr: 0x0142f660
// name: LobbyCommand_InfoEnumMessage_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_InfoEnumMessage_serialize(int * param_1, int param_2) */

void __thiscall LobbyCommand_InfoEnumMessage_serialize(void *this,int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes/dumps LobbyCommand_InfoEnumMessage, writing the message enum and
                       nullable Arg1/Arg2 objects after the LobbyCommand base. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting LobbyCommand_InfoEnumMessage\n");
  LobbyCommand_dump(this,param_1,piVar2);
  DebugStream_writeCString(param_1,"Message ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  DebugStream_writeCString(param_1,"Arg1: ");
  piVar2 = *(int **)((int)this + 0xc);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"Arg2: ");
  piVar2 = *(int **)((int)this + 0x10);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"Ending LobbyCommand_InfoEnumMessage\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

