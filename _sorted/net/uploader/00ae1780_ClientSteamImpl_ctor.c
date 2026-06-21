// addr: 0x00ae1780
// name: ClientSteamImpl_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientSteamImpl_ctor(void * this, void * owner, bool initializeSteam_)
    */

void * __thiscall ClientSteamImpl_ctor(void *this,void *owner,bool initializeSteam_)

{
  undefined1 uVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ClientSteamImpl callback storage, registers Steam overlay and
                       microtransaction callbacks, and optionally calls SteamAPI_Init. Callback
                       template vtables identify the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015cb616;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(bool *)((int)this + 4) = initializeSteam_;
  *(void **)this = owner;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = CCallback<ClientSteamImpl,GameOverlayActivated_t,0>::vftable;
  *(void **)((int)this + 0x14) = this;
  *(undefined **)((int)this + 0x18) = &DAT_00ae1240;
  *(void **)((int)this + 0x14) = this;
  *(undefined **)((int)this + 0x18) = &DAT_00ae1240;
  SteamAPI_RegisterCallback((undefined4 *)((int)this + 8),0x14b,uVar2);
  local_4 = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) =
       CCallback<ClientSteamImpl,MicroTxnAuthorizationResponse_t,0>::vftable;
  *(void **)((int)this + 0x28) = this;
  *(code **)((int)this + 0x2c) = FUN_00ae1630;
  SteamCallback_registerCallback98((undefined4 *)((int)this + 0x1c),(int)this,0xae1630);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(char *)((int)this + 4) != '\0') {
    uVar1 = SteamAPI_Init();
    *(undefined1 *)((int)this + 5) = uVar1;
  }
  ExceptionList = local_c;
  return this;
}

