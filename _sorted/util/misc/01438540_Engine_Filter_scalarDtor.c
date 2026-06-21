// addr: 0x01438540
// name: Engine_Filter_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Engine_Filter_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for Engine::Filter; calls Engine_Filter_dtor and
                       frees this when requested. */
  Engine_Filter_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

