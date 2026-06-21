// addr: 0x0149aba0
// name: MacroNode_baseScalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall MacroNode_baseScalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for MacroNode base; calls MacroNode cleanup and
                       frees this when requested. */
  FUN_0149a860();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

