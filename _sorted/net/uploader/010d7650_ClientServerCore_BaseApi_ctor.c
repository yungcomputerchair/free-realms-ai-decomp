// addr: 0x010d7650
// name: ClientServerCore_BaseApi_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientServerCore_BaseApi_ctor(void * this, void * a, void * b, void *
   c, void * d, void * e, void * f, void * handler) */

void * __thiscall
ClientServerCore_BaseApi_ctor
          (void *this,void *a,void *b,void *c,void *d,void *e,void *f,void *handler)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ClientServerCore::BaseApi, setting Udp/Rpc handler vtables, string
                       buffers, a BaseUdpManager, timeout defaults, and API defaults. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164bbe3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_010d7a70(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  *(undefined ***)((int)this + 0xc0) = UdpLibrary::UdpConnectionHandler::vftable;
  *(undefined ***)((int)this + 0xc4) = ClientServerCore::RpcManagerHandler::vftable;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined ***)this = ClientServerCore::BaseApi::vftable;
  *(undefined ***)((int)this + 0xc0) = ClientServerCore::BaseApi::vftable;
  *(undefined ***)((int)this + 0xc4) = ClientServerCore::BaseApi::vftable;
  FUN_010d90b0(handler);
  *(undefined **)((int)this + 0x20c) = &DAT_01cb9730;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined ***)((int)this + 0x208) = SoeUtil::StringFixed<256>::vftable;
  *(undefined **)((int)this + 0x32c) = &DAT_01cb9730;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined ***)((int)this + 0x328) = SoeUtil::StringFixed<64>::vftable;
  FUN_00897c70();
  FUN_00897c70();
  *(undefined **)((int)this + 3000) = &DAT_01cb9730;
  *(undefined4 *)((int)this + 0xbc0) = 0;
  *(undefined4 *)((int)this + 0xbbc) = 0;
  *(undefined ***)((int)this + 0xbb4) = SoeUtil::StringFixed<32>::vftable;
  local_4._0_1_ = 8;
  pvVar2 = Mem_Alloc(0x2b0);
  local_4._0_1_ = 9;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = BaseUdpManager_ctor(a,b,c,d,f);
  }
  *(undefined4 *)((int)this + 0x1f0) = uVar3;
  *(void **)((int)this + 0x1f8) = e;
  pcVar1 = *(code **)(*(int *)((int)this + 900) + 8);
  local_4 = CONCAT31(local_4._1_3_,8);
  *(undefined1 *)((int)this + 500) = 1;
  (*pcVar1)(5000);
  (**(code **)(*(int *)((int)this + 0x798) + 8))(5000);
  BaseApi_initDefaults(this);
  ExceptionList = unaff_EBX;
  return this;
}

