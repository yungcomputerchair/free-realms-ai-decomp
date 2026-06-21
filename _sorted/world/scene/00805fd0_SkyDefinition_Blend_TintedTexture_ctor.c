// addr: 0x00805fd0
// name: SkyDefinition_Blend_TintedTexture_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void SkyDefinition_Blend_TintedTexture_ctor(void * this) */

void __fastcall SkyDefinition_Blend_TintedTexture_ctor(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = uRam01cb53fc;
  uVar2 = uRam01cb53f8;
                    /* Initializes a SkyDefinition blend object containing two
                       SkyDefinition::TintedTexture members with default globals and cleared
                       weights/flags. */
  uVar1 = uRam01cb53f4;
  *(undefined4 *)((int)this + 0x20) = _DAT_01cb53f0;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined ***)this = SkyDefinition::TintedTexture::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  uVar4 = uRam01cb53fc;
  uVar3 = uRam01cb53f8;
  uVar2 = uRam01cb53f4;
  uVar1 = _DAT_01cb53f0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = uVar2;
  *(undefined4 *)((int)this + 0x58) = uVar3;
  *(undefined ***)((int)this + 0x30) = SkyDefinition::TintedTexture::vftable;
  *(undefined4 *)((int)this + 0x5c) = uVar4;
  *(undefined4 *)((int)this + 0x60) = 0;
  return;
}

