// addr: 0x008088e0
// name: Sky_LinearBlendController_TintedTexture_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Sky_LinearBlendController_TintedTexture_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for
                       Sky::LinearBlendController<SkyDefinition::TintedTexture>; calls the
                       destructor and frees this when requested. */
  Sky_LinearBlendController_TintedTexture_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

