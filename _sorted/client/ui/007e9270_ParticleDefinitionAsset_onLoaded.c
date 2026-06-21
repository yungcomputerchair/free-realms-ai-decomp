// addr: 0x007e9270
// name: ParticleDefinitionAsset_onLoaded
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ParticleDefinitionAsset_onLoaded(void * this, void * asset) */

bool __thiscall ParticleDefinitionAsset_onLoaded(void *this,void *asset)

{
  undefined4 uVar1;
  
                    /* Casts a loaded Asset to DeepAssetHelper::ParticleDefinitionAsset, passes it
                       to a helper, clears a pending flag/callback if set, and notifies
                       waiters/count state. Method name inferred from RTTI and load-callback shape.
                        */
  uVar1 = FUN_00d8d382(asset,0,&AssetManagement::Asset::RTTI_Type_Descriptor,
                       &DeepAssetHelper::ParticleDefinitionAsset::RTTI_Type_Descriptor,0);
  FUN_007e8f60(uVar1);
  if (*(char *)((int)this + 0x39) != '\0') {
    (**(code **)(*(int *)((int)this + -0x90) + 0x24))();
    *(undefined1 *)((int)this + 0x39) = 0;
  }
  if (0 < *(int *)((int)this + -0x88)) {
    FUN_00d34430();
  }
  return true;
}

