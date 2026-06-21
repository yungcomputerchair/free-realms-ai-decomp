// addr: 0x014eb1f0
// name: AccountCommand_RequestAvatarImages_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandRequestAvatarImages.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RequestAvatarImages_cloneInto(void * this, void * target)
    */

void __thiscall AccountCommand_RequestAvatarImages_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Casts the target to AccountCommand_RequestAvatarImages, clones the base
                       AccountCommand portion, then copies the request's container/member at offset
                       8 via helper FUN_005f1e5c. RTTI provides the class name. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_RequestAvatarImages::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandRequestAvatarImages.cpp",
                 0x34);
  }
  AccountCommand_cloneInto(this,target_00);
  FUN_005f1e5c((int)this + 8);
  return;
}

