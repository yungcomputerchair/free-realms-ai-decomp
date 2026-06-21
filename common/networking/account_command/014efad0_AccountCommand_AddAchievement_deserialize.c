// addr: 0x014efad0
// name: AccountCommand_AddAchievement_deserialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AccountCommand_AddAchievement_deserialize(int * param_1, void * param_2)
    */

int __thiscall AccountCommand_AddAchievement_deserialize(void *this,int *param_1,void *param_2)

{
  int *packet;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  
                    /* Deserializes AccountCommand_AddAchievement by opening the stream frame,
                       reading NetworkCommand base state, reading/replacing the nested achievement
                       object, then closing the frame. */
  packet = param_1;
  (**(code **)(*(int *)this + 0x10))(param_1,&param_1);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_01407cf0(packet);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = AccountCommand_AddAchievement_deserializeAchievementComponent
                        (packet,(void **)((int)this + 8));
      uVar3 = extraout_var_01;
      if (bVar1) {
        iVar2 = (**(code **)(*(int *)this + 0x14))(packet);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

