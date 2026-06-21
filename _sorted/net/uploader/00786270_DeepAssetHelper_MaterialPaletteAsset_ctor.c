// addr: 0x00786270
// name: DeepAssetHelper_MaterialPaletteAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepAssetHelper_MaterialPaletteAsset_ctor(void * this, void *
   requester, void * assetId, bool keepFlashRefs_) */

void * __thiscall
DeepAssetHelper_MaterialPaletteAsset_ctor
          (void *this,void *requester,void *assetId,bool keepFlashRefs_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs DeepAssetHelper::MaterialPaletteAsset, initializing the
                       AssetRequester interface, asset fields, and a FlashReference list. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01559b99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *(undefined ***)((int)this + 0x28) =
       AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  *(void **)((int)this + 0x2c) = requester;
  local_4 = 1;
  *(void **)((int)this + 0x30) = assetId;
  *(undefined ***)this = DeepAssetHelper::MaterialPaletteAsset::vftable;
  *(undefined ***)((int)this + 0x28) = DeepAssetHelper::MaterialPaletteAsset::vftable;
  *(undefined4 *)((int)this + 0x34) = 0;
  FUN_0077a3f0();
  *(undefined ***)((int)this + 0x5c) =
       SoeUtil::List<DeepAssetHelper::MaterialPaletteAsset::FlashReference,-1>::vftable;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(bool *)((int)this + 0x7c) = keepFlashRefs_;
  ExceptionList = local_c;
  return this;
}

