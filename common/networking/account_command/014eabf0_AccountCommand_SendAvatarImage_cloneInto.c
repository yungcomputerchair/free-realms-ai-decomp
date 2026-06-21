// addr: 0x014eabf0
// name: AccountCommand_SendAvatarImage_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandSendAvatarImage.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SendAvatarImage_cloneInto(void * this, void * target) */

void __thiscall AccountCommand_SendAvatarImage_cloneInto(void *this,void *target)

{
  void *target_00;
  void *_Dst;
  
                    /* Casts the target to AccountCommand_SendAvatarImage, clones base state, copies
                       the image length, allocates a new buffer, and memcpy's image bytes. RTTI and
                       source file identify the class. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &AccountCommand_SendAvatarImage::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\account_command\\AccountCommandSendAvatarImage.cpp",0x3b);
  }
  AccountCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  _Dst = Mem_Alloc(*(uint *)((int)this + 8));
  *(void **)((int)target_00 + 0xc) = _Dst;
  _memcpy(_Dst,*(void **)((int)this + 0xc),*(size_t *)((int)this + 8));
  return;
}

