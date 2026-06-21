// addr: 0x015269a0
// name: UserDataCommand_RespondAdvertisement_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_RespondAdvertisement_dump(int * param_1, void * param_2)
    */

void __thiscall UserDataCommand_RespondAdvertisement_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for UserDataCommand_RespondAdvertisement, dumping
                       the UserDataCommand base state and four vector/string member groups. */
  (**(code **)(*(int *)this + 8))(param_1);
  CommandArchive_serializeStringMember(this,param_1);
  STLVector_string_serialize((int)this + 8);
  STLVector_string_serialize((int)this + 0x18);
  STLVector_string_serialize((int)this + 0x28);
  STLVector_string_serialize((int)this + 0x38);
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

