// addr: 0x01525800
// name: UserDataCommand_RespondFeatureRotator_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondFeatureRotator_dump(int * param_1, void * param_2)
    */

void __thiscall UserDataCommand_RespondFeatureRotator_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for UserDataCommand_RespondFeatureRotator, dumping
                       the UserDataCommand base state and seven vector/string member groups. */
  (**(code **)(*(int *)this + 8))(param_1);
  CommandArchive_serializeStringMember(this,param_1);
  STLVector_string_serialize((int)this + 8);
  STLVector_string_serialize((int)this + 0x18);
  STLVector_string_serialize((int)this + 0x28);
  STLVector_string_serialize((int)this + 0x38);
  STLVector_string_serialize((int)this + 0x48);
  STLVector_string_serialize((int)this + 0x58);
  STLVector_string_serialize((int)this + 0x68);
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

