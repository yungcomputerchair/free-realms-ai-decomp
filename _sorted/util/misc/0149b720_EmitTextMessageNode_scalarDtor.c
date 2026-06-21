// addr: 0x0149b720
// name: EmitTextMessageNode_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall EmitTextMessageNode_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for EmitTextMessageNode; calls cleanup and frees
                       this when requested. */
  EmitTextMessageNode_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

