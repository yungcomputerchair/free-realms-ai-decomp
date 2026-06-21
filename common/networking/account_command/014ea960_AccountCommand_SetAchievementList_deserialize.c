// addr: 0x014ea960
// name: AccountCommand_SetAchievementList_deserialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AccountCommand_SetAchievementList_deserialize(int * this_obj, int *
   deserializer) */

int __thiscall
AccountCommand_SetAchievementList_deserialize(void *this,int *this_obj,int *deserializer)

{
  uint uVar1;
  int iVar2;
  int *local_4;
  
                    /* Deserializes AccountCommand_SetAchievementList by entering the object,
                       deserializing the AccountCommand base, reading the vector/list of achievement
                       objects, and leaving the object. The sibling cloneInto and vtable evidence
                       identify the class. */
  local_4 = this;
  uVar1 = (**(code **)(*(int *)this + 0x10))(this_obj,&local_4);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_01407cf0(this_obj);
    if ((char)uVar1 != '\0') {
      local_4 = this_obj;
      FUN_014ea6c0((int)this + 8);
      iVar2 = (**(code **)(*(int *)this + 0x14))(this_obj);
      return iVar2;
    }
  }
  return uVar1 & 0xffffff00;
}

