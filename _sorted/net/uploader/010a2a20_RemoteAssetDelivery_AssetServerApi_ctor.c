// addr: 0x010a2a20
// name: RemoteAssetDelivery_AssetServerApi_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RemoteAssetDelivery_AssetServerApi_ctor(void * this, void * owner) */

void * __thiscall RemoteAssetDelivery_AssetServerApi_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs RemoteAssetDelivery::AssetServerApi with service id
                       ASSET_SERVER_05, installs multiple interface vtables, and configures
                       transfer/cache limits. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01646268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ClientServerCore_BaseApi_ctor
            (this,"ASSET_SERVER_05",(void *)0x1,(void *)0x0,(void *)0x0,(void *)0x0,(void *)0x0,
             (void *)0x1);
  *(void **)((int)this + 0xbe8) = owner;
  *(undefined ***)this = RemoteAssetDelivery::AssetServerApi::vftable;
  *(undefined ***)((int)this + 0xc0) = RemoteAssetDelivery::AssetServerApi::vftable;
  *(undefined ***)((int)this + 0xc4) = RemoteAssetDelivery::AssetServerApi::vftable;
  *(undefined4 *)(*(int *)((int)this + 0x1f0) + 0xdc) = 0x100000;
  *(undefined4 *)(*(int *)((int)this + 0x1f0) + 0x100) = 10;
  *(undefined4 *)(*(int *)((int)this + 0x1f0) + 0x238) = 0x6400000;
  *(undefined4 *)(*(int *)((int)this + 0x1f0) + 0x160) = 1000;
  *(undefined4 *)(*(int *)((int)this + 0x1f0) + 0x15c) = 1000;
  *(undefined4 *)(*(int *)((int)this + 0x1f0) + 0x158) = 0x200000;
  ExceptionList = local_c;
  return this;
}

