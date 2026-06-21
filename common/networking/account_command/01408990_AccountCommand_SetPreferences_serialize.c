// addr: 0x01408990
// name: AccountCommand_SetPreferences_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetPreferences_serialize(int * param_1, int param_2) */

void __thiscall AccountCommand_SetPreferences_serialize(void *this,int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes/dumps AccountCommand_SetPreferences and conditionally serializes
                       the preferences object pointer after a null marker. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting AccountCommand_SetPreferences\n");
  AccountCommand_serialize(this,param_1,(int)piVar2);
  piVar2 = *(int **)((int)this + 8);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  DebugStream_writeCString(param_1,"Ending AccountCommand_SetPreferences\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

