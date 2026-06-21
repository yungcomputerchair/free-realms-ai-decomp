// addr: 0x014ea3e0
// name: AccountCommand_SetAchievementList_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetAchievementList_dump(int * param_1, void * param_2) */

void __thiscall AccountCommand_SetAchievementList_dump(void *this,int *param_1,void *param_2)

{
  int *serializer;
  
                    /* Emits a textual/debug dump for AccountCommand_SetAchievementList, dumping
                       NetworkCommand base state and the achievement-list vector. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,param_1,(int)serializer);
  STLVector_serializablePointer_serialize_014ea2f0
            (&stack0x00000000,(void *)((int)this + 8),(int)serializer);
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

