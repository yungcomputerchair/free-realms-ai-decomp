// addr: 0x013bbf70
// name: UChatCommand_RequestIgnoreStatus_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UChatCommand_RequestIgnoreStatus_dump(int * param_1, void * param_2) */

void __thiscall UChatCommand_RequestIgnoreStatus_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for UChatCommand_RequestIgnoreStatus, delegating
                       to the UChatCommand base dump and dumping the request ignore-status member
                       before the Ending marker. */
  (**(code **)(*(int *)this + 8))(param_1);
  UChatCommand_dump(this,param_1);
  UChatCommand_RequestIgnoreStatusList_serialize(&stack0x00000000,(int)this + 0x44);
  DebugStream_writeCString(param_1,"Ending UChatCommand_RequestIgnoreStatus\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

