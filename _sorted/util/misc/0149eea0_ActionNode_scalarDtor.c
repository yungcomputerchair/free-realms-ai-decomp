// addr: 0x0149eea0
// name: ActionNode_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall ActionNode_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for ActionNode; calls ActionNode_dtor and frees
                       this when requested. */
  ActionNode_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

