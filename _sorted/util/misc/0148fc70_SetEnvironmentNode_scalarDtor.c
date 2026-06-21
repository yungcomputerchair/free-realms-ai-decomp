// addr: 0x0148fc70
// name: SetEnvironmentNode_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall SetEnvironmentNode_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for SetEnvironmentNode; calls
                       SetEnvironmentNode_dtor and frees this when requested. */
  SetEnvironmentNode_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

