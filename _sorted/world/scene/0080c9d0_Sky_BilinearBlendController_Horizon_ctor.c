// addr: 0x0080c9d0
// name: Sky_BilinearBlendController_Horizon_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Sky_BilinearBlendController_Horizon_ctor(void * this) */

void * __fastcall Sky_BilinearBlendController_Horizon_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Sky::BilinearBlendController<SkyDefinition::Horizon> by running
                       the horizon linear-blend base/member constructor and installing the bilinear
                       controller vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01568548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Sky_LinearBlendController_BlendHorizon_ctor(this);
  *(undefined ***)this = Sky::BilinearBlendController<SkyDefinition::Horizon>::vftable;
  ExceptionList = local_c;
  return this;
}

