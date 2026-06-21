// addr: 0x01321900
// name: Engine_FRTWGameService_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Engine_FRTWGameService_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for Engine::FRTWGameService; calls
                       Engine_FRTWGameService_dtor and frees this when requested. */
  Engine_FRTWGameService_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

