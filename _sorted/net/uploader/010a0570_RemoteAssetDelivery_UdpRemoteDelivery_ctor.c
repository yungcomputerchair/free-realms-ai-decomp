// addr: 0x010a0570
// name: RemoteAssetDelivery_UdpRemoteDelivery_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RemoteAssetDelivery_UdpRemoteDelivery_ctor(void * this, void * owner,
   void * endpoint) */

void * __thiscall RemoteAssetDelivery_UdpRemoteDelivery_ctor(void *this,void *owner,void *endpoint)

{
  undefined4 *owner_00;
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs RemoteAssetDelivery::UdpRemoteDelivery, initializes
                       RemoteDeliveryInterface and AssetServerHandler vtables, allocates
                       AssetServerApi, and configures timeouts. */
  puStack_8 = &LAB_016458f3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = RemoteAssetDelivery::RemoteDeliveryInterface::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  local_4 = 0;
  owner_00 = (undefined4 *)((int)this + 8);
  *owner_00 = RemoteAssetDelivery::AssetServerHandler::vftable;
  *(undefined ***)this = RemoteAssetDelivery::UdpRemoteDelivery::vftable;
  *owner_00 = RemoteAssetDelivery::UdpRemoteDelivery::vftable;
  *(void **)((int)this + 4) = owner;
  pvVar2 = Mem_Alloc(0xbf0);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = RemoteAssetDelivery_AssetServerApi_ctor(pvVar2,owner_00);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  pvVar2 = (void *)0x1;
  *(int **)((int)this + 0xc) = piVar3;
  (**(code **)(*piVar3 + 0x18))(endpoint,30000,1,uVar1);
  (**(code **)(**(int **)((int)this + 0xc) + 0x34))(30000,0);
  ExceptionList = pvVar2;
  return this;
}

