// addr: 0x010b3250
// name: Deep_SkyLightEntity_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Deep_SkyLightEntity_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for Deep::SkyLightEntity; calls
                       Deep_SkyLightEntity_dtor and frees this when requested. */
  Deep_SkyLightEntity_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

