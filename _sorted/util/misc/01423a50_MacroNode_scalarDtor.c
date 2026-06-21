// addr: 0x01423a50
// name: MacroNode_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall MacroNode_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for MacroNode; calls MacroNode_dtor and frees this
                       when requested. */
  MacroNode_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

