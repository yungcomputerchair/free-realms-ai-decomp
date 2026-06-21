// addr: 0x008057d0
// name: Sky_LinearBlendController_TintedTexture_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void Sky_LinearBlendController_TintedTexture_ctor(void * this) */

void __fastcall Sky_LinearBlendController_TintedTexture_ctor(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* Constructs a Sky::LinearBlendController<SkyDefinition::TintedTexture> with
                       three default TintedTexture key/value objects and clears the final flag. */
  *(undefined ***)this = Sky::LinearBlendController<SkyDefinition::TintedTexture>::vftable;
  *(undefined ***)((int)this + 0x10) = SkyDefinition::TintedTexture::vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar3 = uRam01cb54ac;
  uVar2 = uRam01cb54a8;
  uVar1 = uRam01cb54a4;
  *(undefined4 *)((int)this + 0x30) = _DAT_01cb54a0;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  *(undefined ***)((int)this + 0x40) = SkyDefinition::TintedTexture::vftable;
  *(undefined4 *)((int)this + 0x50) = 0;
  uVar3 = uRam01cb54ac;
  uVar2 = uRam01cb54a8;
  uVar1 = uRam01cb54a4;
  *(undefined4 *)((int)this + 0x60) = _DAT_01cb54a0;
  *(undefined4 *)((int)this + 100) = uVar1;
  *(undefined4 *)((int)this + 0x68) = uVar2;
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  *(undefined ***)((int)this + 0x70) = SkyDefinition::TintedTexture::vftable;
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar3 = uRam01cb54ac;
  uVar2 = uRam01cb54a8;
  uVar1 = uRam01cb54a4;
  *(undefined4 *)((int)this + 0x90) = _DAT_01cb54a0;
  *(undefined4 *)((int)this + 0x94) = uVar1;
  *(undefined4 *)((int)this + 0x98) = uVar2;
  *(undefined4 *)((int)this + 0x9c) = uVar3;
  *(undefined4 *)((int)this + 0xa0) = _DAT_0175b420;
  *(undefined1 *)((int)this + 0xa4) = 0;
  return;
}

