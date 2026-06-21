// addr: 0x00d50240
// name: GameRuntimeTerrain_EcoData_Texture_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameRuntimeTerrain_EcoData_Texture_ctor(void * this, void * ecoData) */

void * __thiscall GameRuntimeTerrain_EcoData_Texture_ctor(void *this,void *ecoData)

{
  undefined4 uVar1;
  
                    /* Constructs a GameRuntimeTerrain::EcoData::Texture requester, copies the
                       parent EcoData requester field, installs the Texture vftable, and stores the
                       parent pointer. Evidence is GameRuntimeTerrain::EcoData::Texture::vftable. */
  uVar1 = *(undefined4 *)((int)ecoData + 0xcc);
  *(undefined ***)this = AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined ***)this = GameRuntimeTerrain::EcoData::Texture::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = ecoData;
  return this;
}

