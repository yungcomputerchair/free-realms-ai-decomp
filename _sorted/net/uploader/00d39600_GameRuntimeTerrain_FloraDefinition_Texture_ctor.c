// addr: 0x00d39600
// name: GameRuntimeTerrain_FloraDefinition_Texture_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameRuntimeTerrain_FloraDefinition_Texture_ctor(void * this, void *
   floraDefinition) */

void * __thiscall GameRuntimeTerrain_FloraDefinition_Texture_ctor(void *this,void *floraDefinition)

{
  undefined4 uVar1;
  
                    /* Constructs a GameRuntimeTerrain::FloraDefinition::Texture requester, copies
                       the parent definition's requester field, installs the Texture vftable, and
                       stores the parent pointer. Evidence is
                       GameRuntimeTerrain::FloraDefinition::Texture::vftable. */
  uVar1 = *(undefined4 *)((int)floraDefinition + 0x34);
  *(undefined ***)this = AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined ***)this = GameRuntimeTerrain::FloraDefinition::Texture::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = floraDefinition;
  return this;
}

