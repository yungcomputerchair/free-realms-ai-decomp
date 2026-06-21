// addr: 0x0080ca80
// name: Sky_BilinearBlendController_TintedTexture_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Sky_BilinearBlendController_TintedTexture_ctor(void * this) */

void * __fastcall Sky_BilinearBlendController_TintedTexture_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Sky::BilinearBlendController<SkyDefinition::TintedTexture> from
                       its blend/tinted-texture base and installs the class vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015685a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Sky_LinearBlendController_BlendTintedTexture_ctor(this);
  *(undefined ***)this = Sky::BilinearBlendController<SkyDefinition::TintedTexture>::vftable;
  ExceptionList = local_c;
  return this;
}

