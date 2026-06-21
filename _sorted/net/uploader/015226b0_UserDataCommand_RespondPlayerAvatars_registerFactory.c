// addr: 0x015226b0
// name: UserDataCommand_RespondPlayerAvatars_registerFactory
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UserDataCommand_RespondPlayerAvatars_registerFactory(void * registry)
    */

void * __fastcall UserDataCommand_RespondPlayerAvatars_registerFactory(void *registry)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x4c bytes, constructs UserDataCommand_RespondPlayerAvatars, and
                       registers it via the registry callback at vtable offset 0x48. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b8b7b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x4c);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = UserDataCommand_RespondPlayerAvatars_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)registry + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

