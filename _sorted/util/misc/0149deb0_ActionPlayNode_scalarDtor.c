// addr: 0x0149deb0
// name: ActionPlayNode_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall ActionPlayNode_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for ActionPlayNode; calls ActionPlayNode_dtor and
                       frees this when requested. */
  ActionPlayNode_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

