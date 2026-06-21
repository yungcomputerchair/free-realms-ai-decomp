// addr: 0x00807f70
// name: Sky_LinearBlendController_BlendTintedTexture_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Sky_LinearBlendController_BlendTintedTexture_ctor(void * this) */

void * __fastcall Sky_LinearBlendController_BlendTintedTexture_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a
                       Sky::LinearBlendController<SkyDefinition::Blend<SkyDefinition::TintedTexture>>
                       with three blend members and a cleared trailing flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567817;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this =
       Sky::LinearBlendController<SkyDefinition::Blend<SkyDefinition::TintedTexture>_>::vftable;
  SkyDefinition_Blend_TintedTexture_ctor((void *)((int)this + 0x10));
  local_4 = 0;
  SkyDefinition_Blend_TintedTexture_ctor((void *)((int)this + 0x80));
  local_4 = CONCAT31(local_4._1_3_,1);
  SkyDefinition_Blend_TintedTexture_ctor((void *)((int)this + 0xf0));
  *(undefined4 *)((int)this + 0x160) = _DAT_0175b420;
  *(undefined1 *)((int)this + 0x164) = 0;
  ExceptionList = local_c;
  return this;
}

