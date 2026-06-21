// addr: 0x0080b1b0
// name: FUN_0080b1b0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_0080b1b0(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor thunk for a SkyDefinition controller type, calling
                       FUN_0080a790 and freeing this when requested. */
  Sky_LinearBlendController_Blend_Horizon_ctor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

